#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long  fac[21];
  long long   vis[100];
    fac[0]=1;
    fac[1]=1;
    for(int i=2;i<=20;i++)
    {
        fac[i]=fac[i-1]*i;
       // printf("fac[%d]=%d\n ",i,fac[i]);
    }
    int t;
    long long fr[1000];
    cin>>t;
    string s;
   // memset(fr,0,sizeof fr);
   int c=1;
    while(t--)
    {
        cin>>s;
memset(fr,0,sizeof fr);
        for(int i=0;i<s.length();i++)
        {
            fr[s[i]-'A']++;
           // cout<<s[i]<<" "<<fr[s[i]]<<endl;
        }
        memset(vis,0,sizeof vis);
        long long mul=1;

        for(int i=0;i<s.length();i++)
        {
          if(vis[s[i]-'A']==0){
          mul=mul*fac[fr[s[i]-'A']];
          //cout<<mul<<"..."<<fac[fr[s[i]-'A']]<<endl;

          vis[s[i]-'A']=1;
          }
        }
        long long as=(fac[s.length()]);
       /* for(int i = 0; i < 26; i++)
            as /= fac[fr[i]];*/
        //cout<<as<<endl;
        cout<<"Data set "<<c++<<": "<<as/mul<<endl;
    }
    return 0;
}
