#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k;
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ",s1;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       s1="";
        for(int i=0;i<n;i++)
        {
            s1+=s[i];
        }
       // cout<<s1;
       for(int i=0;i<k;i++)
       {
           cout<<s1<<endl;
           if(next_permutation(s1.begin(), s1.end())!=1)
                break ;
       }

    }

    return 0;
}
