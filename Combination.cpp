#include<bits/stdc++.h>
using namespace std;


long long binomialCoeff(long n, long k)
{
  long long  int res=1;

    if(k>n-k)
    {
        k=n-k;
    }

    for(int i=1;i<=k;i++,n--)
    {
        res*=n;
       // cout<<".."<<res<<endl;
        res/=i;

       // cout<<"!!!!"<<res<<endl;
    }

    return res;
}


int main()
{
    long long n,k;
    while(cin>>n>>k){
            if(n==0&&k==0)
            break;
    printf("%lld things taken %lld at a time is %lld exactly.\n",n,k,binomialCoeff(n, k));
    }
}
