#include <bits/stdc++.h>

using namespace std;
long long int fun( long long int b,long long int p)
{
   long long int pow=1;
   int i;


   for(i=p;i>0;i--)
   {
   pow=pow*b;
   }
   return pow;
}
int main()
{
   long long  int n,ar[100000];
  long long  int p,k;

    cin>>n>>k;
      long long int res,sum=0;
        p=k-1;
        //cout<<"p="<<p<<endl;
        for(int i=0;i<k;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<k;i++)
        {
            res=fun(n,p);
            sum+=(ar[i]*res);

           // cout<<sum<<endl;
            p--;
        }
        //cout<<sum<<endl;
        if(sum%2==0)
        {
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;

    }
    //cout<<pow(3,2)<<endl;
    return 0;
}
