#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mx 65001
int prime[3000000] , nPrime;
int mark[10000002];
void sieve()
{
    int i , j , limit = sqrt(mx * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= mx; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= mx; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= mx; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}



ll mods (ll n , ll p , ll m)
{
    if(p == 0)
        return 1;
    if(p % 2 == 0)
    {
        ll ret = mods(n, p/2,m);
        return ((ret % m) * (ret % m)) % m;
    }
    else
        return ((n % m) * (mods(n ,p -1,m) % m) ) % m;
}
int main()
{

long long int n;
sieve();
while(cin>>n)
{
    //sieve(n);
    if(n==0)
        break;
   // bool f=true;
    if(mark[n]==0)
    {
        printf("%lld is normal.\n",n);
    continue;
    }
bool f =true;
     for(int i=2; i<n; i++)
    {
        if(i!=mods(i,n,n))
        {
            f=false;
            break;
        }
    }

    if(f)
           printf("The number %lld is a Carmichael number.\n", n);
        else
            { printf("%lld is normal.\n",n);}
}

}
