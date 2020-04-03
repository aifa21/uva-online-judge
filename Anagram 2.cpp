#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
        map<string,string>mp;

        cin>>n;
        string s[1000],s1;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            s1=s[i];
           sort (s1.begin(),s1.end());

           mp[s[i]]=s1;

        }
        string s3,s4;
        while(cin>>s3)
        {
            if(s3=="END")
            break;

           cout<<"Anagrams for: "<<s3<<endl;
        s4=s3;
       sort(s4.begin(),s4.end());
       int p=0;
       int t=0;
       for(int i=0;i<n;i++){

       if(s4==mp[s[i]])
       {
           t=1;
           p++;
           cout<<"  "<<p<<')'<<" ";
           cout<<s[i]<<endl;
       }

        }
       if(t==0)
        cout<<"No anagrams for: "<<s3<<endl;
        }
        if(test)
            cout<<endl;
    }

    return 0;
}
