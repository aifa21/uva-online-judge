#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll a[110];
int main()
{
    int t;
    cin >> t;
    a[0]=1;
    for(int i=1;i<=29;i++)
    {
        a[i]=a[i-1]*2;
    }
   // cout<<a[29]<<endl;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=2;i<=29;i++)
        {
            if(n%(a[i]-1)==0)
            {
                cout<< n/(a[i]-1)<<endl;
                break;
            }
        }
    }
    return 0;
}
