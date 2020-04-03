#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int w,n,m,mn,t,f,c=0;
 cin>>t;
  while(t--)


  {
     c++;
      cin>>w;
      if(w%2==1)
      {
          cout<<"Case "<<c<<": "<<"Impossible"<<endl;
          continue;
      }
       mn=999;
int m,n,p;
      for(int i=2;i<=w;i++)
      {
         if(w%i==0)
         {
            p=w/i;
            if(p%2==1&&i%2==0)
            {
                m=p;
                n=i;
                break;
            }
            else if(p%2==0&&i%2==1)
            {
                m=i;
                n=p;
                break;
            }


         }




  }
  printf("Case %d: ",c);
  cout<<m<<" "<<n<<endl;
  }
    return 0;
}
