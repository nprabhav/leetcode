#include<bits/stdc++.h>
using namespace std;
 double mySqrt(long long x) {
      double ans=x/2,cnt=0,left=0,right=x,prev_ans=ans;
      while(ans*ans!=x)
      {
        prev_ans=ans;
        if(ans*ans>x)
          {
            right=ans;
            ans=(ans+left)/2;
            cout<<ans<<endl;
          }
        else
          {
            left=ans;
            ans=(ans+right)/2;
            cout<<ans<<endl;
          }
          cnt++;
          if((prev_ans)==(ans))
          break;

      }
      return trunc(ans);

  }

double mySqrt1(long long x) 
{
    long r=x;
    while(r*r>x)
      r=(r+x/r)/2;
    return r;
}


 int main()
 {
   //cout<<setprecision(5);
   cout<<mySqrt1(2147395599);
   return 0;
 }
