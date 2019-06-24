//https://github.com/truongduy134/uva-online-judge-solutions/blob/master/Volume_100/UVA10056.c


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,c;
        double d;
        cin>>a>>d>>c;
        if(d<=0)
        {
            printf("0.0000\n");
        }
        else{
        printf("%.4lf\n",d*pow(1-d,c-1)/(1-(pow(1-d,a))));
        }

    }
   // cout << "Hello world!" << endl;
    return 0;
}
