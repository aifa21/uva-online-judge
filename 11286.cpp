#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;


    //int mx=-1;
    while(cin>>n)
    {
        map<string,int>mp;
    string a[105];
        if(n==0)
            break;
        int mx=-1;
        for(int i=0;i<n;i++){
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];

        sort(a,a+5);
        string s="";
        for(int j=0;j<5;j++)
        {
            s+=a[j];
        }

    if(!mp.count(s))
    {
        mp[s]=1;
        mx=max(mx,mp[s]);
    }
    else{
      mp[s]=mp[s]+1;
   //mp[s]=m;
    mx=max(mx,mp[s]);
    }}

     map<string,int>::iterator it;

     int ct=0;
     cout<<"mx="<<mx<<endl;

      for(it=mp.begin();it!=mp.end();it++)
      {
          cout<<it->first<<" !!!  "<<it->second<<endl;
          if(it->second==mx)
          {
              cout<<it->first<<"...."<<it->second<<endl;
              ct+=it->second;
          }
      }
      cout<<ct<<endl;
    }
    return 0;
}
