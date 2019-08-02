#include <bits/stdc++.h>

using namespace std;
bool fa[30];
int fr[200];


void se()
{
      fr['q'] = fr['a'] = fr['z'] = 1;
    fr['w'] = fr['s'] = fr['x'] = 2;
    fr['e'] = fr['d'] = fr['c'] = 3;

    fr['r'] = fr['f'] = fr['v'] =
        fr['t'] = fr['g'] = fr['b'] = 4;

    fr['y'] = fr['h'] = fr['n'] =
        fr['u'] = fr['j'] = fr['m'] = 7;

    fr['i'] = fr['k'] = 8;

    fr['o'] = fr['l'] = 9;

    fr['p'] = 10;
}
bool func(string s1)
{
    for(int i=0;i<s1.size();i++)
    {
        char c=s1[i];
        //cout<<"c== "<<c<<endl;
        if (!fa[fr[c]])
            return false;
    }

    return true;
}
int main()
{

   se();

    int n,m;

    while (cin >> n>>m)
    {
        for (int i = 1; i <= 10; ++i)
            fa[i] = true;

        while (n--)
        {
            int c;
            cin >> c;
            fa[c] = false;
        }

   int mn = 0;
        set<string> longwords;
        string s;

        while (m--)
        {
            cin >> s;

            if (s.size() > mn && func(s))
            {
                mn = s.size();
                longwords.clear();//let first max=4 then if we get max=5 then erase previous word
                longwords.insert(s);
            }
            else if (s.size() == mn && func(s))
                longwords.insert(s);
        }

       vector<string>v(longwords.begin(),longwords.end());

       sort(v.begin(),v.end());

cout<<v.size()<<endl;
       for(int i=0;i<v.size();i++)
       {
           cout<<v[i]<<endl;
       }

       v.clear();
   }
    return 0;
}
