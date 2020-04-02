#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,b,c,d,i,j;
    char ar[120][120];
    while(cin>>n>>m){
    for( i= 1; i<=n; i++)
    {
        for( j= 1; j<=m; j++)
            cin>>ar[i][j];
    }
    int f=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ar[i][j]=='B')
            {
                a=i;
                b=j;
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }

    int ff=0;
    for(int i=n;i>=1;i--)
    {
        for(int j=m;j>=1;j--)
        {
            if(ar[i][j]=='B')
            {
                c=i;
                d=j;
                ff=1;
                break;
            }
        }
        if(ff==1)
        {
            break;
        }
    }
    cout<<(a+c)/2<<" "<<(b+d)/2<<endl;

    }
    return 0;
}
