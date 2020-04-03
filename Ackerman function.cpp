#include <bits/stdc++.h>

using namespace std;

 int main()
 {
 long long int a,b,n,temp,p,t,mx;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a==0&&b==0) break;
        mx=0;
        for(int i=a;i<=b;i++)
        {
            n=i;
            t=0;
            while(1)
            {
                if (n%2==1)
                    n=3*n+1;
                else n=n/2;
                t++;
                if(n==1)break;
            }
            if(mx<t)
            {
                p=i;
                mx=t;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,p,mx);
        }
   return 0;
 }
