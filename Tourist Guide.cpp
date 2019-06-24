
#include <bits/stdc++.h>
using namespace std;
int dis[1000];int low[1000];
int visit[1000];int parent[10000];
vector <int> node[1000];vector<int> ap;

int arti[1000];
int timer;
void dfs(int u){
    dis[u] = low[u] = ++timer;
   // printf("DIS[%d]= %d   LOW[%d]=%d\n",u,timer,u,timer);
    visit[u] = true;
    int v;  int children = 0;
    for(int i = 0; i < node[u].size(); i++){
        v = node[u][i];

        if(!visit[v]){
            children++;

            parent[v] = u;

            dfs(v);

   low[u] = min(low[u], low[v]);

        if(parent[u] == -1 && children > 1)
        {


        arti[u]=1;
        //printf("...arti[%d]=%d\n",u,arti[u]);
        }

   if(parent[u] != -1  && low[v] >= dis[u])
        {


       arti[u]=1;
      // printf("...arti[%d]=%d\n",u,arti[u]);
        }
        }
        else if(v != parent[u])
            low[u] = min(low[u], dis[v]);

    }
}
int main()
{

    //memset(arti,0,sizeof(a))

    int n,c=1;
    bool bb=false;
    while(cin >> n){
             memset(arti,0,sizeof(arti));
     memset(parent,-1,sizeof(parent));
             memset(visit,0,sizeof(visit));

            if(n==0)
            break;
            map<string ,int>mp;
            map<int,string >mp1;
  string s;
  for(int i=0;i<n;i++)
  {
      cin>>s;
      mp[s]=i;
      mp1[i]=s;

  }
  int e;
  cin>>e;
    for(int i = 0; i < e; i++)
    {
        string a, b;
        cin >> a >> b;
        node[mp[a]].push_back(mp[b]);
        node[mp[b]].push_back(mp[a]);
    }


    for(int i = 0; i < n; i++)
    {
        if(visit[i] == false)
            dfs(i);
    }

vector<string>v;
    for(int i=0;i<n;i++)
    {
        if(arti[i])
        v.push_back(mp1[i]);
    }

        if (bb) printf ("\n");
        bb = true;

printf("City map #%d: %d camera(s) found\n",c++,v.size());


sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<"\n";


    for(int i=0;i<n;i++) node[i].clear();


    v.clear();
    mp.clear();
    mp1.clear();

}}
