#include <bits/stdc++.h>
using namespace std;
#define  unvisited -1
#define  visited 1
vector <int> node[500000];
int dis[500000];
int p;
void dfs(int x)
{ p++;


    dis[x]=1;

    for(int i=0;i<node[x].size();i++)
    {
       int v=node[x][i];

        if(dis[v]==-1)
        {
            dfs(v);
        }
    }

}
int main()
{
    int tes,l=0;
    cin >> tes;
    char ch;
cin  >>ch;

    while(tes--)
    {
        memset(dis, unvisited , sizeof dis);


      l++;
int n=ch-65+1;
string s;
        while(scanf("%s",&s)==1)
        {
            getchar();
            if(s.length()!=2)
            {  ch=s[0];
                break;
            }
            int x=s[0]-65;
            int y=s[1]-65;
            node[x].push_back(y);
            node[y].push_back(x);
        }



        for(int i=1;i<=n;i++)
        {  p=0;
            if(dis[i]==-1)
            {
               dfs(i);
              p++;



            }
        }
        cout<<p;

        for(int i = 1; i <= n; i++)
            node[i].clear();
    }
}
