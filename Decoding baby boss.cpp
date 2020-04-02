#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>t;
    map<char,char>mp;
    string s,s1,s2;
    while(t--)
    {
        char c1,c2;
        cin>>s;
        cin>>n;

        for(char ch='A';ch<='Z';ch++)
        {
            mp[ch]=ch;
        }
        for(int i=0;i<n;i++)
        {
            cin>>c1>>c2;
            for(char ch='A';ch<='Z';ch++)
            {
               if(mp[ch]==c2)
               {
                   mp[ch]=c1;
               }
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='_')
            {
                cout<<'_';
            }
            else{
            cout<<mp[s[i]];
            }
        }
        cout<<endl;
    }
    return 0;
}
