#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1,s2;
    while(1){
            getline(cin,s);
            if(s=="DONE")
            break;
            s1="";
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
           s1+=s[i] ;
        }
    }
    // cout<<s1<<endl;
    for(int i=0;i<s1.size();i++)
    {
        if(isupper(s1[i]))
        {
           s1[i]=s1[i]+32 ;
        }

    }
   //cout<<s1<<endl;

    string s2=s1;
    reverse(s1.begin(),s1.end());
    if(s1==s2){
    cout << "You won't be eaten!" << endl;
    }
    else
    {
    cout << "Uh oh.." << endl;
    }
     //s1.erase();

}
    return 0;
}
