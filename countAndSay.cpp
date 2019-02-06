#include<bits/stdc++.h>
using namespace std;
string countAndSay(int n) {
  if(n==1)
  return "1";

  string s = countAndSay( n - 1 );
  string res;
  int count = 1;

  s+='0';
  for(int i=0;i<s.size()-1;i++)
  {
    if(s[i]==s[i+1])
      count++;
    else
    {
      res+=to_string(count);
      res+=s[i];
      count=1;
    }
  }
  return res;


}

int main()
{
  int n;
  cin>>n;
  cout<<countAndSay(n);
  return 0;
}
