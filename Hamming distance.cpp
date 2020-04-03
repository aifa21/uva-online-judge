#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[20];
    int n, h, Case;
    scanf("%d", &Case);
    while (Case--)
    {
        scanf("%d%d", &n, &h);
        int i;
        for (i = 0; i < n - h; i++)
            str[i] = '0';//s += "0";
        for (i = 1; i <= h; i++)
            str[n - i] = '1';//s += "1";

        str[n] = NULL;
        do
        {
            cout<<str<<endl;
        } while (next_permutation(str, str + n));//while(next_permutation(s.begin(), s.end()));

        if (Case)
            cout<<endl;
    }

    return 0;
}
