#include <bits/stdc++.h>
using namespace std;
# define n1 1000000
typedef long long int ll;
int prime[100000005] , nPrime;
int mark[100000002];
void sieve()
{
    int i , j , limit = sqrt(n1 * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n1; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n1; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n1; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}

int main()
{
sieve();
      long long int i,n,y,x;

            while(scanf("%lld",&n)==1)
                {




                int  f=0;

                  for(i=0;prime[i]<=n/2;i++)
                  //count=0;
                        {


                             x=prime[i];
                            y=n-x;


                      if(mark[y]==0){
                            f=1;
                        printf("%lld is the sum of %lld and %lld.\n",n,x,y);
                        //f=1;
                        break;


                      }
                        }

                        if(f==0)
                        {
                            // printf("Goldbach's conjecture is wrong.\n");
                            printf("%lld is not the sum of two primes!\n",n);
                        }


                        }


             return 0;
}

