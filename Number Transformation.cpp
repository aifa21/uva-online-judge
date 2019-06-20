#include <bits/stdc++.h>
using namespace std;

int prime[3000000] , nPrime;
int mark[10000002];
int factor[300];
int ck;
typedef pair<int,int>p;
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;
//cout<<"Prime["<<nPrime++<<"]="<<prime[nPrime++]<<endl;
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
void prime_factor (int n)
{

    ck = 0;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        while(n % prime[i] == 0)
        {
           factor[ck++] = prime[i];

            n = n / prime[i];
         //   cout<<"N="<<n<<endl;
        }
    }
    if(n > 1)
    {
        factor[ck++] = n;


    }
}

int ct=0;
int bfs(int n,int m)
{

    queue<p>q;

    q.push(make_pair(n,0));
  int  visit[1010];
 memset(visit,0,sizeof(visit));

    while(!q.empty())
    {
        int u=q.front().first;
        int v=q.front().second;
      //  cout<<u<<"..."<<v<<endl;
        q.pop();


if(u==m)
{
    return v;
}

        if(visit[u]==1)
        {
            continue;
        }

        visit[u]=1;
       // printf("..%d\n",u);


        ck=0;

        prime_factor(u);
        int sum;
        for(int i = 0; i < ck; i++)
        {
           sum=u+ factor[i];
          // cout<<".."<<factor[i]<<endl;
          //
          //cout<<"sum="<<sum<<endl;

        if(sum<=m&&factor[i]!=u)
        {
            q.push(make_pair(sum,v+1));
        }
        }

    }
    return -1;
}
int main()
{
    sieve(1000);
    int n,m,pp=0;;
    while(cin >> n>>m)
    {  pp++;
        if(n==0&&m==0)
            break;
      //  memset(visit,0,sizeof(visit));
       int ss= bfs(n,m);

        printf("Case %d: %d\n",pp,ss);

       // printf("\n");
    }
}
