#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    string s = "";

    int c = 0, i = a.size() - 1, j = b.size() - 1;
    while(i >= 0 || j >= 0 || c == 1)
    {
        c += i >= 0 ? a[i --] - '0' : 0;
        c += j >= 0 ? b[j --] - '0' : 0;
        s = char(c % 2 + '0') + s;
        c /= 2;
    }

    return s;
}


 int main()
 {
   cout<<addBinary(string("11"),string("1"));
   return 0;
 }
 //
 // def addBinary(self, a, b):
 //     return bin(int(a,2)+int(b,2))[2:]
