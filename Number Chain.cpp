#include <bits/stdc++.h>

using namespace std;
vector<long int >v;
long int makenum(vector<long int>x)
{
    vector<long int>::iterator it;

    it=x.begin();
    long int m=0;
    while(it!=x.end())
    {
        m=m*10+ *it;
        it++;
    }
    return m;
}


void func(long int n,long int c)
{

    vector<long int >v1,vr;
     long int tmp=n;

      v.push_back(n);
c++;
       while(n>0)
       {
           v1.push_back(n%10);
           n=n/10;
       }
       sort(v1.begin(),v1.end());
       vr=v1;
       reverse(vr.begin(),vr.end());



       long int a=makenum(v1);
       long int b=makenum(vr);

   long int xx=b-a;

   if(find(v.begin(),v.end(),xx)==v.end())
 {
     cout<<b<<" - "<<a<<" = "<<xx<<endl;
    func(xx,c);
 }
 else{
    cout<<b<<" - "<<a<<" = "<<xx<<endl;
    printf("Chain length %d\n\n",c);
 }


}
int main()
{
   long int n;
  // vector<long int >v,v1,vr;
   while(cin>>n)
   {
       if(n==0)
        break;
        v.clear();
         printf("Original number was %ld\n",n);
      func(n,0);

       //v.clear();


   }
    return 0;
}
