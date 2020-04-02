#include <bits/stdc++.h>
#define inf 1000000000
using namespace std;
int arr[100][100];

void build()
{
    for(int i =0; i < 100; i++)
        for(int j = 0; j < 100; j++)
        arr[i][j] = inf;
}
int floyd(int n)
{
    for(int k = 0; k < n; k++)
         {
             for(int i = 0; i <n; i++)
             {
                 for(int j = 0; j <n; j++)
                 {
                     if(arr[i][j]>(arr[i][k]+arr[k][j]))
                  {

                  arr[i][j]=arr[i][k]+arr[k][j];
                  }
                 }
             }
         }
}
int main()
{
    int n,m,d=0,z=0;
    while(cin>>n>>m)
    {
        build();
        if(n==0&&m==0)
        {
            break;
        }
    z++;
    arr[n][m]=1;
    while(cin>>n>>m)
    {
        build();
        if(n==0&&m==0)
        {
            break;
        }
        arr[n][m]=1;
    }
    floyd(100);
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            if(i!=j&&arr[i][j]!=inf)
            {
                s+=arr[i][j];
                d++;
            }
        }
    }
    cout<<(s/d)<<endl;
    }
    return 0;
}
