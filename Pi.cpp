#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y) {
    int t;
    while(x%y) {
        t = x, x = y, y = t%y;
        cout<<"Y="<<y<<endl;
    }
    return y;
}
int main()
{
    int n,a[1000];
   while(cin>>n){
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
      {

         if(gcd(a[i],a[j])==1)// when value of y=1 that is there is no common divisor between them
         {

             c++;

         }

    }
    }

    cout<<c<<endl;}
    return 0;
}
