
#include <bits/stdc++.h>
using namespace std;
#define inf 100000000
int arr[101][101];

void build (int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j)
                arr[i][j] = 0;
            arr[i][j] = inf;
        }
    }
}
void floyd(int n)
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                arr[i][j]=min(arr[i][j],max(arr[i][k],arr[k][j]));
             // cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<endl;
                }
            }
        }
    }


int n,e,a,b,cost,p,y,z,cs;
int main()
{
  cs=0;
  //int bb=0;

  while(cin>>n>>e>>p){
       // cs++;
    if(n==0&&e==0&&p==0)
    {
        break;
    }
    build(n);
    for(int i = 1; i <= e; i++)
    {
        // int a, b, cost;
        cin>>a>>b>>cost;
        arr[a][b] =cost;
        arr[b][a]=cost;
  // arr[a][b] =min(arr[a][b],cost);



    }
    floyd(n);
    if(cs)
    {
        cout<<endl;
    }
    cout<<"Case #"<<++cs<<endl;
for(int i=1;i<=p;i++)
{
    cin>>y>>z;
    if(arr[y][z]==inf)
    {
        cout<<"no path"<<endl;
    }
    else{
    cout<<arr[y][z]<<endl;
    }
}

}
}

/*
 4 5
 1 2 7
 1 3 1
 3 4 9
 3 2 2
 2 4 1
*/
