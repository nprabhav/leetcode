#include<bits/stdc++.h>
using namespace std;
bool wordBreak(string s, vector<string>& wordDict)
{
  if(wordDict.size()==0) return false;

        vector<bool> dp(s.size()+1,false);
        dp[0]=true;

        for(int i=1;i<=s.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    string word = s.substr(j,i-j);
                    if(find(wordDict.begin(),wordDict.end(),word)!= wordDict.end())
                    {
                        dp[i]=true;
                        break; //next i
                    }
                }
            }
        }

        return dp[s.size()];
}
int main(int argc, char const *argv[]) {
  vector<string> wordDict={"car","ca","rs"};
  cout<<wordBreak("cars",wordDict);
  return 0;
}
