#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        int a;
        cin>>a;
        for(int i=0;i<a;i++)
        {
            cin>>s1;
            int c=0;
            for(int j=0;j<s1.length();j++)
            {
                if(s1[j]==s[j])
                {
                    c++;
                }
            }

            if(s1.length()==c)
            {
                cout<<"y"<<endl;
            }
            else{
                cout<<"n"<<endl;
            }
        }
    }
    return 0;
}
