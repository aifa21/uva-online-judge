#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll prefix[1000005];
void setPrefix (string s)
{
    int i = 0 ,j = -1;
    int len = s.length();
    prefix[0] = -1;
    while(i < len){

        while( j >= 0 && s[i] != s[j]){
            j = prefix[j];


        }
        i++;

        j++;

        prefix[i] = j;

       }
}
int kmp_algorithm(string s , string s1)
{
    int n = s.length();
    int m = s1.length();
   int i = 0 , j = 0;
   setPrefix(s1);

   while(i < n){
       while(j >= 0 and s[i] != s1[j]){

           j = prefix[j];

       }

       i++;

       j++;
      // cout<<"J="<<j<<endl;


            }



   return j;
   }
int main()
{
    //string s;
    int n;
    cin>>n;
    int c=0;
    while(n--){
string s,s1;

    c++;
    cin>>s;
    int mm=s.length();
    s1=s;
    reverse(s1.begin(),s1.end());
    int  x = kmp_algorithm(s,s1);

    cout<<"Case "<<c<<": "<<mm+(mm-x)<< endl;
}}
