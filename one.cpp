#include <bits/stdc++.h>

using namespace std;
//n = 7, 111111 is the smallest multiple of 7 that consists only of ones
//n=3,111 is multiple of 3 that 111 is divided by 3
 int main()
{
     long long int n;

      while(cin>>n){
    long long int t=1,co=1;

          while(t%n!=0)
          {
              co++;
              t=((t*10)+1)%n;
             // cout<<"t="<<t<<endl;
          }


      cout<<co<<endl;}
    return 0;
}
