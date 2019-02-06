class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle)
        return 0;
        int i,j,len1,len2;
        i=j=0;
        len1=haystack.length();
        len2=needle.length();
        while(i<len1&&j<len2)
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
            }
        else
            {
                i=i-j+1;
                j=0;
            }
        }
        if(j==len2)
            return i-j;
        else
            return -1;
        }
    };
