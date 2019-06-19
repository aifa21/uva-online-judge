#include <bits/stdc++.h>
using namespace std;
# define n1 1000000
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
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
      int i,n,y;
            while(scanf("%d",&n)==1){

                        if(n==0)
                        break;
                       // sieve(n);
                printf("%d:\n",n);
                int  c=0;

                   for(i=0;prime[i]<=n/2;i++)
                  //count=0;
                        {

                            y=n-prime[i];

                      if(mark[y]==0){
                        c=1;
                       // printf("%d:\n",n);
                         printf("%d+%d\n",prime[i],y);
                        break;

                      }



                        }

                    if(c==0)
                    {
                         printf("NO WAY!\n");

                    }
                       // count=0;
            }

             return 0;
}
