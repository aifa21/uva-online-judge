#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,char>p,pair<int,char>q){
    if(p.first!=q.first){ return p.first>q.first;  }
    else
        { return p.second<q.second; }}
int row , col;
int fx[]={+1,-1,+0,+0};
 int fy[]={+0,+0,+1,-1};
char maze[101][101]; int r[101][101];
void dfs (int x, int y,char ch){
    r[x][y] = 1;
for(int i = 0; i < 4; i++){
        int a, b;
        a = x + fx[i]; b = y + fy[i];
 if( a >= 0 && a < row && b >= 0 && b < col && r[a][b] == 0) {
           // r[a][b] = 1;
           if(maze[a][b] ==ch){
                dfs(a , b,ch);  }}}}
int main() {
    int t,o=0;
    cin>>t;
    while(t--){ o++;
    set <char>:: iterator it; set<char>st;
      vector <pair <int, char > > v;
    cin >> row >> col;
 for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++)
                {
                cin >> maze[i][j];
                st.insert(maze[i][j]);
                  }}
        memset(r , 0, sizeof r);
        int cnt;
        for(it=st.begin();it!=st.end();it++){
         cnt=0;
          char ch=*it;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(r[i][j] == 0) {
                    if(ch==maze[i][j]) {
                        dfs(i , j,ch);
                        cnt++;
                         }}}}
         v.push_back(make_pair(cnt, ch));  }
        sort(v.begin(),v.end(),cmp);

        printf("World #%d\n",o);
        for(int i = 0; i < v.size(); i++) {
         printf("%c: %d\n", v[i].second, v[i].first); }
     v.clear(); st.clear(); }}

