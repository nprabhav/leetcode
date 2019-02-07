#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(const char* s) {
     int len = 0;
     while (*s) {
         if (*s++ != ' ')
             ++len;
         else if (*s && *s != ' ')
             len = 0;
     }
     return len;
 }


 int main()
 {
   char s[] = "  ";
   cout<<lengthOfLastWord(s);
   return 0;
 }
