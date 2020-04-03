#include <bits/stdc++.h>
using namespace std;
int in[10005];
vector <int> vertex[10005];
int main(){
int n,m;
string s,s1,s2;
 map<string,int>mp;
 map<int,string>mp1;
 int o=0;
   while(cin>>n){
    o++;
memset(in,0,sizeof in);
for(int i=1;i<=n;i++){
           cin>>s;
           mp[s]=i;
           mp1[i]=s;}
       cin>>m;
       for(int i=0;i<m;i++){
           cin>>s1>>s2;
           vertex[mp[s1]].push_back(mp[s2]);
           in[mp[s2]]++;}
      priority_queue<int, vector<int>, greater<int> > q;
       for(int i = 1; i <= n; i++){
          if(in[i] == 0)
           q.push(i);}
       vector <int> vc;
       while(!q.empty()){
           int u = q.top();
           vc.push_back(u);
           q.pop();
           for(int i = 0; i <vertex[u].size(); i++){
               int v = vertex[u][i];
               in[v]--;
               if(in[v] == 0){
                   q.push(v);  }}}
printf("Case #%d: Dilbert should drink beverages in this order:", o);
       for(int i = 0; i < vc.size(); i ++)
         cout<<" "<<mp1[vc[i]];
    cout<<"."<<endl;
         cout<<endl;
      vc.clear();
      for(int i = 1; i <= n; i++)
       vertex[i].clear();
  vc.clear();}
    return 0;}



