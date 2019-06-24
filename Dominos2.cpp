#include <bits/stdc++.h>

using namespace std;
int dis[100001];
vector <int> node[100001];

int p;
void dfs(int u)
{
    p++;
    //cout<<p<<endl;
    int v;
    dis[u] = 1;
    cout<<"DIS["<<u<<"]="<<dis[u]<<endl;
    for(int i = 0; i < node[u].size(); i++)
    {
        v = node[u][i];
        if(dis[v] == -1)
        {
            dfs(v);
        }

    }


}
int main()
{
  int n , m,t,l,pp;
  cin>>t;
  while(t--)
  {

      memset(dis, -1 ,sizeof dis);
      cin>>n>>m>>l;
      int p=0;
      for(int i = 0; i < m ;i++)
      {
          int a, b;
          cin >> a >> b;
          node[a].push_back(b);
         // node[b].push_back(a);


      }


      for(int i = 0; i <l; i++)
      {
         cin>>pp;
         dfs(pp);

      }
      int cnt=0;
       for(int i=1;i<=n;i++)
       {
           if(dis[i]==1)
           {
               //cout<<"did["<<i<<"]="<<dis[i]<<endl;
               cnt++;
           }
       }
       cout<<cnt<<endl;
 for(int i=1;i<=n+l;i++)
 {
     node[i].clear();
 }
  }
return 0;
}
