#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int n=nums.size();
  int dp[n];
  dp[0]=nums[0];
  int maxSum=dp[0];

  for(int i=1;i<n;i++)
  {
    dp[i]=nums[i]+(dp[i-1]>0?dp[i-1]:0);
    maxSum=max(maxSum,dp[i]);
  }
  return maxSum;
}


//this is modified
//wow it worked
//Thursday

int main()
{
  vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
  cout<<maxSubArray(v);
  return 0;
}
