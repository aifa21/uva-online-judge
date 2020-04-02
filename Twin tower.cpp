#include <bits/stdc++.h>
using namespace std;
int pr[1005][1005], dp[1005][1005];
string x, y;
int m,n,a[1000],b[1000];

int lcs (int m, int n)
{
   for(int i = 1; i <= m; i++)
        dp[i][0] = 0;
    for(int j = 0; j <= n; j++)
        dp[0][j] = 0;
   for(int i = 1; i <= m; i++)
   {
       for(int j = 1; j <= n; j++)
       {
           if(a[i-1] == b[j - 1])
           {
               dp[i][j] = dp[i - 1][j - 1] + 1;
               pr[i][j] = 1;
               //cout<<"*P{"<<i<<"]["<<j<<"]="<<pr[i][j]<<endl;
           }
           else if(dp[i - 1][j] >= dp[i][j - 1])
           {
               dp[i][j] = dp[i - 1][j];
               pr[i][j] = 2;
              // cout<<"**P{"<<i<<"]["<<j<<"]="<<pr[i][j]<<endl;
           }
           else
           {
               dp[i][j] = dp[i][j - 1];
               pr[i][j] = 3;
               //cout<<"***P{"<<i<<"]["<<j<<"]="<<pr[i][j]<<endl;
           }
       }
   }

   return dp[m][n];
}

int main()
{
  int o=0;
    while(cin>>m>>n)
    {
        o++;

        memset(dp,0,sizeof dp);
        if(m==0&&n==0)
            break;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
       int ans  = lcs(m,n);
    // pain(m,n);
    cout<<"Twin Towers #"<<o<<endl;
       cout<<"Number of Tiles : "<< ans << endl<<endl;;
        /*
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                cout<< dp[i][j] << " ";
            }
            cout<< endl;
        }
        */

    }
}
