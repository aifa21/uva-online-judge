#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char a[100][100];
    while(cin>>n)
    {
        int d=0,c;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
            }
c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

                if(a[i][j]=='.')
                {
                    if(a[i+1][j]=='.'&&a[i+1][j-1]=='.'&&a[i+1][j+1]=='.'&&a[i+2][j]=='.')
                    {
                        a[i][j]='#';
                        a[i+1][j]='#';
                        a[i+1][j-1]='#';
                        a[i+1][j+1]='#';
                        a[i+2][j]='#';
                    }
                }

            }
        }
        //cout<<"c= "<<c<<" d= "<<d<<endl;
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

                if(a[i][j]=='.')
                {
            cout<<"NO"<<endl;
            return 0;
        }

            }}
            cout<<"YES"<<endl;

    }
    return 0;
}
