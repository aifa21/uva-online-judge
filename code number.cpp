#include <bits/stdc++.h>

using namespace std;

int main()
{



int t;
cin>>t;
getchar();
while(t--)
{  string s;
//string ss="";
while(getline(cin,s)){
    string ss="";
    if(s.size()==0)
    {
        break;
    }
    for(int i=0;i<s.size();i++)
    {

      if(s[i]=='4')
      {
          ss+="A";
      }
     else if(s[i]=='1')
      {
          ss+="I";
      }
    else  if(s[i]=='2')
      {
          ss+="Z";
      }
     else if(s[i]=='3')
      {
          ss+="E";
      }
     else if(s[i]=='5')
      {

          ss+="S";
      }
     else if(s[i]=='6')
      {
          ss+="G";
      }
    else  if(s[i]=='7')
      {
          ss+="T";
      }
     else if(s[i]=='8')
      {
          ss+="B";
      }
     else if(s[i]=='9')
      {
          ss+="P";
      }
     else if(s[i]=='0')
      {
          ss+="O";
      }
      else{
        ss+=s[i];
      }
    }
     cout<<ss<<endl;
    }
    if(t)
    cout<<endl;
}


    return 0;
}
