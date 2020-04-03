#include <bits/stdc++.h>

using namespace std;
int dis[500000];
vector <int> node[500000];

int p;
void dfs(int u)
{
    p++;
    int v;
    dis[u] = 1;
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
  int n , m,t=0;

  while(cin>>n>>m)
  {
      if(n==0&&m==0)
        break;
      map<string,int>mp;
     string str,s1,s2,s3;
      memset(dis, -1 ,sizeof dis);
      for(int i=1;i<=n;i++)
      {
          cin>>str;
          mp[str]=i;
      }
      for(int i = 0; i < m ;i++)
      {

          cin >> s1 >> s2;
          node[mp[s1]].push_back(mp[s2]);
          node[mp[s2]].push_back(mp[s1]);
      }
    int mx=0;
      for(int i = 1; i <= n; i++)
      {
          if(dis[i] == -1)
          {
              p=0;
              dfs(i);
              if(mx<p)
              {
                  mx=p;
              }
          }

      }
       cout<<mx<<endl;
   // mp.clear();
   for(int i = 1; i <= n; i++)
            node[i].clear();

  }
return 0;
}
