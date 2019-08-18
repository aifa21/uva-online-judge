#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int o=0;
    while(n--)
    {
        if(o)
            cout<<endl;
         o++;

        int m;
        cin>>m;
        getchar();
        string s,ss="";
        printf("Case %d:\n",o);
        for(int i=0;i<m;i++){
        getline(cin,s);
        int f=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==' ')
            {
                if(f==0){
                    cout<<" ";
                    f=1;
                    }

            }
            else{
                    f=0;
                cout<<s[j];
            }
        }
        cout<<endl;


        }
        //cout<<endl;
    }
    return 0;
}
