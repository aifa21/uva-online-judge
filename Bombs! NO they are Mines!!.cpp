#include<bits/stdc++.h>

using namespace std;



#define pb          push_back



typedef pair <int , int> pi;

int arr[1005][1005];
int visit[1005][1005];
int fx[]= {0,-1, 0,1};
int fy[]= {1, 0,-1,0};
int n , m;
void fun()
{
    for(int i = 0; i < 1005; i++)
    {
        for(int j = 0; j < 1005; j++)
        {
            arr[i][j] = -1;
            visit[i][j] = -1;
        }
    }
}
void bfs(int i , int j)
{
   arr[i][j] = 0;
   visit[i][j]=0;
   queue <pi> q;
   q.push(make_pair(i ,j));
   while(!q.empty())
   {
       int x, y;
       x = q.front().first;
       y = q.front().second;
      // printf("x=%d  ... y=%d\n",x,y);
       q.pop();
       for(int i = 0; i < 4; i++)
       {
           int a , b;
           a = x + fx[i];
           b = y + fy[i];
         //   printf("a=%d   b=%d\n",a,b);
          if(a >= 0 &&  a < n && b >= 0 && b < m && arr[a][b] == -1&&visit[a][b]==-1)
          {

              arr[a][b] = arr[x][y] + 1;
          //   printf("arr[%d][%d]=%d\n",a,b,arr[a][b]);
              q.push(make_pair(a,b));
          }
       }
   }
}


int main()
{
   while(cin>>n && cin>>m)

   {
       if(n==0&&m==0)
       break;
     fun();
       int z;
       cin>>z;
       int r , c , p;
       for(int i = 0; i < z; i++)
       {
           cin>>r;
           cin>>c;
           for(int i = 0; i < c; i++)
           {
               cin>>p;
               arr[r][p] = 99999;
           }
       }
       int s1 , s2;
       cin>>s1;
       cin>>s2;
       bfs(s1 , s2);
       int d1, d2;
       cin>>d1;
       cin>>d2;
       //print();
       printf("%d\n", arr[d1][d2]);
   }
}
