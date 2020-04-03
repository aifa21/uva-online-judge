#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
   //a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    vector<int>ar;
    cin>>n;
    while(n--)
    {
        int  c=0,d=0,e=0,f=0,g=0,h=0,v=0,j=0,a1=0,b1=0;
        cin>>m;

        for(int i=1;i<=m;i++)
        {

            int a=i,b=i;
            while(a!=0)
            {
                a=a%10;
                ar.push_back(a);
                b=b/10;

                a=b;
            }
        }
      /*for (int i=0;i<ar.size();i++)
        {
            cout << ar[i] << " "<<endl;
}*/
        for(int i=0;i<ar.size();i++)
        {


            if(ar[i]==0)
               a1++;
                if(ar[i]==1)
               b1++;
                if(ar[i]==2)
                c++;
                if(ar[i]==3)
                d++;
                if(ar[i]==4)
                e++;
                if(ar[i]==5)
                f++;
                if(ar[i]==6)
                g++;
                if(ar[i]==7)
                h++;
                if(ar[i]==8)
                v++;
                if(ar[i]==9)
                j++;

        }



  cout<<a1<<" "<<b1 <<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<v<<" "<<j<<endl;
            ar.clear();

    }

    return 0;
}
