class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum=0,carry=0;

        if(digits[digits.size()-1]==9)
         {
            digits[digits.size()-1]=0;
            carry=1;
         }
         else
            digits[digits.size()-1]+=1;

        for(int i=digits.size()-2;i>=0;i--)
        {
            if(digits[i]==9 && carry==1)
            {
                digits[i]=0;
                carry=1;
            }
            else if(carry==1)
            {
                digits[i]=digits[i]+1;
                carry=0;
            }
        }

        if(carry==1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
