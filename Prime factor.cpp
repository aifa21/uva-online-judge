#include <bits/stdc++.h>
using namespace std;

int prime[300000] , nPrime;
int mark[100005];
int fact[300];
int ck;
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(mark[i] == 0)
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
void prime_fact (int n)
{
    ck = 0;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        while(n % prime[i] == 0)
        {
           fact[ck++] = prime[i];
            n = n / prime[i];
        }
    }
    if(n > 1)
    {
        fact[ck++] = n;
    }
}
int main()
{
    sieve(100000);
    int n;

    //int f=0;
    while(cin >> n)
    {
        if(n==0)
            break;
        if(n>0)
            {
        prime_fact(n);
           int f=0;
        printf("%d = ",n);

        for(int i = 0; i < ck; i++)
        {
             if(f)
            printf(" x ");

            printf("%d",fact[i]);
                 f=1;
        }
        printf("\n");
        }
        else
        {
            prime_fact(abs(n));
            printf("%d = -1",n);
            for(int i = 0; i < ck; i++)
        {

            printf(" x %d",fact[i]);

        }
        printf("\n");






        }
    }
    return 0;
}

