#include <bits/stdc++.h>

using namespace std;
vector<int>node[1000];
int dis[35];
int par[35];
int bfs(int src)
{
    int f;
    dis[src]=0;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<node[u].size();i++)
        {
            int v=node[u][i];
            if(dis[v]==-1)
            {
                dis[v]=dis[u]+1;
               // cout<<"DIS["<<v<<"] "<<dis[v]<<endl;
               //par[v]=u;
               // cout<<"par["<<v<<"]="<<par[v]<<endl;
                q.push(v);
            }

        }
    }

}
int main()
{


    // memset(dis,-1,sizeof dis);
     int t,z=0;
     cin>>t;
      cout<<"SHIPPING ROUTES OUTPUT"<<endl<<endl;
     string s,s1,s2,s3,s4;
     while(t--)
    {
        int n,e,p,k;
        string s,s1,s2,s3,s4;
        memset(dis,-1,sizeof dis);
       // z++;
       map<string,int>mp;
        cin>>n>>e>>p;


        for(int i=1;i<=n;i++)
        {
            cin>>s;
            mp[s]=i;
        }
        for(int i=0;i<e;i++)
        {
            cin>>s1>>s2;
            node[mp[s1]].push_back(mp[s2]);
             node[mp[s2]].push_back(mp[s1]);
        }
          cout<<"DATA SET  "<<++z<<endl<<endl;
        for(int j=0;j<p;j++)
        {
              memset(dis,-1,sizeof dis);
            cin>>k>>s3>>s4;
            int a=mp[s3];
            int b=mp[s4];
            bfs(a);
            if(dis[b]<0)
            {
                cout<<"NO SHIPMENT POSSIBLE\n";
            }

            else{
                cout<<"$"<<k*dis[b]*100<<endl;
            }

        }

        //cout<<"END OF OUTPUT"<<endl;

       for(int i = 1; i <= e; i++)
           {

           node[i].clear();
           }
           mp.clear();

     cout<<endl;
    }

 cout<<"END OF OUTPUT"<<endl;
    return 0;
}
