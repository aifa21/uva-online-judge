#include <bits/stdc++.h>
using namespace std;
#define  unvisited -1  #define  visited 1
vector <int> node[10005];
int dis[10005],ar[10005],s,pp;
void bfs (int src){ s=0,pp;
    queue <int> q;
    dis[src] = 0;
    q.push(src);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        int v=0;
        if(node[u].size()==0) {  pp=u; break; }
        int mx=0;  int z=0;
        for(int i = 0; i < node[u].size(); i++){
              v=node[u][i];
       if(dis[v]==unvisited&&mx<ar[v]){
                    mx=ar[v];  z=v;  }}
        q.push(z);
        dis[z]=dis[z]+1;
        s+=mx; }}

int main() {
    int tes,o=0,n,e;
    cin >> tes;
 while(tes--) { o++;
 memset(dis, unvisited , sizeof dis);
        cin >> n >> e;
        for(int i=0;i<n;i++){
            cin>>ar[i]; }
        for(int i = 0; i < e; i++) {
            int u, v;
            cin >> u >> v;
            node[u].push_back(v); }
         bfs(0);
         printf("Case %d: %d %d\n",o,s,pp);
   for(int i = 0; i < n; i++){ node[i].clear(); }}
    return 0;}
