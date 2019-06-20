#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        if(m==0&&n==0)
            break;
        int d;
        int c=0;
        for(int i=m;i<=n;i++)
        {
            d=sqrt(i);
            if(d*d==i)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
