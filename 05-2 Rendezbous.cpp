
#include <bits/stdc++.h>
using namespace std;
#define inf 100000000
int arr[100][100];

void build (int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=n; j++)
        {
            if(i == j)
                arr[i][j] = 0;
            arr[i][j] = inf;
        }
    }
}
/*void floyd(int n)
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(arr[i][j] > arr[i][k] + arr[k][j]){
                arr[i][j] =  arr[i][k] + arr[k][j];
               // next[i][j] = next[i][k];
               // cout<<"i="<<i<<" "<<"j="<<j<<" "<<next[i][j]<<endl;
               cout<<arr[i][j]<<endl;
                }
            }
        }
    }
}*/

int n,e,a,b,cost,ii;
string s;
map<int,string>mp;


int main()
{
    //build();
    int o=0;
  while(cin>>n>>e){
   build(n);
        o++;
  if(n==0&&e==0)
  {
      break;
  }
  for(int i=1;i<=n;i++)
  {
      cin>>s;
      mp[i]=s;
  }
    for(int i = 1; i <= e; i++)
    {
        // int a, b, cost;
        cin>>a>>b>>cost;
        arr[a][b] = cost;
        arr[b][a]=cost;
        //next[a][b] = b;
        //cout<<next[a][b]<<endl;

    }
     for(int k = 1; k <= n; k++)
    {

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(arr[i][j] > arr[i][k] + arr[k][j]){
                arr[i][j] =  arr[i][k] + arr[k][j];
               // next[i][j] = next[i][k];
               // cout<<"i="<<i<<" "<<"j="<<j<<" "<<next[i][j]<<endl;
              cout<<i<<" "<<j<<"="<<arr[i][j]<<endl;
                }
            }
        }
    }

    int mx=9999;
    int su;
    for(int i = 1; i <=n; i++)
        {

            su=0;
            for(int j=1;j<=n;j++){
                if(i!=j)
                {
                    su+=arr[i][j];
                   // cout<<i<<".."<<j<<" "<<su<<endl;
                }
            }

                if(su<mx)
                {
                    mx=su;
                   // cout<<mx<<endl;
                    ii=i;
                }
            }
            cout<<"Case #"<<o<<" : "<<mp[ii]<<endl;
  }
   //find_path(1,2);
}

/*

 1 2 7
 1 3 1
 3 4 9
 3 2 2
 2 4 1
*/
