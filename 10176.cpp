#include <bits/stdc++.h>

using namespace std;

int main()
{

    char c;
    vector<int>v;
    while(cin>>c){
        string s="";
            s+=c;
    while(cin>>c)
    {
        if(c=='#')
            break;
        s+=c;
    }
    int r=0;
    for(int i=0;i<s.size();i++)
    {
        r=r*2+s[i]-48;
        r=r%131071;
    }
    if(r==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
