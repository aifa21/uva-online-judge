#include<iostream>
#include <cstdio>
using namespace std;

/*
 * Convert a Decimal Base to Any Base
 */
 int b=-2;
void convert10tob(long long int N)
{
     if (N == 0)
        return;
     int x = N % b;
    // cout<<"X= "<<x<<endl;
     N /= b;
    // cout<<"N= "<<N<<endl;
     if (x < 0)
        N += 1;
     //    cout<<"..N= "<<N<<endl;
     convert10tob(N);

     if(x<0)
     {
         printf("%d",x + (b *-1));
     }
     else{
        printf("%d",x);
     }
     //cout<< x < 0 ? x + (b *-1) :(-1)* x;
     return;
}

/*
 * Main
 */
int main()
{
    int t;
    cin>>t;
    //cout<<"Enter the integer to convert(N): ";
    int o=0;
   while( t--){
 //   cout<<"Enter the base <= N: ";
   // cin>>b;
  long long int N;
  cin>>N;
    if (N != 0)
    {
        printf("Case #%d: ", ++o);
        convert10tob(N);
        cout<<endl;
    }
    else
        printf("Case #%d: 0", ++o);
   }
    return 0;
}
