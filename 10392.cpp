#include <bits/stdc++.h>
using namespace std;

long long int prime[670000] , nPrime;
long long int mark[10000001];
long long int fact[3000];
long long int ck;
void sieve(long long int n)
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
void prime_fact (long long int n)
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


    sieve(10000000);
   long long  int n;
    while(cin >> n)
    {
        if(n<0)
            break;
        prime_fact(n);
        for(int i = 0; i < ck; i++)
        {  //printf("    %lld\n", n);
            printf("    %lld\n", fact[i]);
        }
        if(n){
        printf("\n");


        }
    }

    return 0;
}
