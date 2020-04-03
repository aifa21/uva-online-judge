
#include <bits/stdc++.h>



using namespace std;


int main() {

 int t,p,m,n,x;
 cin>>t;
 while(t--)
 {
     cin>>m>>n;
     vector<int>v[m];

     for(int i=0;i<n;i++)
     {
         cin>>x;
         p=x%m;
         v[p].push_back(x);
     }



     for(int i=0;i<m;i++)
     {
         cout<<i;

         //int res=v[i].size();
         for(int j=0;j<v[i].size();j++)
         {
             cout<<" -> "<<v[i][j];
         }
         cout<<" -> "<<"\\"<<endl;
     }
     if(t)
     cout<<endl;
 }

  return 0;

}
