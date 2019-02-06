#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int maxSum=nums[0],sum=0;
  for(int i=0;i<nums.size();i++)
  {
      sum+=nums[i];
      maxSum=max(maxSum,sum);
      sum=max(sum,0);
  }
  return maxSum;
}


//this is modified

int main()
{
  vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
  cout<<maxSubArray(v);
  return 0;
}

for i in range(1, len(nums)):
        if nums[i-1] > 0:
            nums[i] += nums[i-1]
    return max(nums)


//Can be solved by Kadane's Algorithm
