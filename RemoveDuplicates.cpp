#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int i=0,j=1;
    if(nums.size()==0)
    return 0;
    while(i<nums.size()&&j<nums.size())
    {
      if(nums[i]==nums[j])
        j++;
      else
      {
        i++;
        int temp;
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        j++;
      }
    }
    return i+1;

 }
int main()
{
  return 0;
}
