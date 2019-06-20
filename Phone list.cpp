#include <bits/stdc++.h>
using namespace std;
struct node
{
    bool endmark;
    node *next[10];
    node()
    {
        endmark = false;
        for(int i = 0; i < 10; i++)
        {
            next[i] = NULL;
        }
    }

};
void make_trie(char *s , node *current)
{
    for(int i = 0; i < strlen(s); i++)
    {
        int x = s[i] - '0';
        if(current->next[x] == NULL)
        {
            current-> next[x] = new node();
        }
        current = current->next[x];
    }
    current -> endmark = true;
}


bool process (char *s , node *current)
{
    for(int i = 0; i < strlen(s); i++)
    {
        int x = s[i] - '0';
       // cout<<"x="<<x<<endl;
        if(current -> next[x] == NULL)
        {
            return false;
        }
        current = current-> next[x];

    }
  //  int p=0;
    if(current -> endmark)
    {
        int c=0;
        //cout<<"P="<<p++<<endl;
        for(int i = 0; i < 10; i++)
        {
            if(current -> next[i])
            {
            //    cout<<"....."<<c++<<endl;
                return true;
            }
        }
    }
    return false;
}
void del (node *current)
{
    for(int i = 0; i < 10; i++)
    {
        if(current->next[i])
            del(current -> next[i]);
    }
    delete(current);
}
int main()
{

    char str[10005][99];
    int tes;
    cin >> tes;
    int o = 0;
    while(tes--)
    {
        node *root = new node();
        o++;
        int q;
        cin >> q;
        for(int i = 0; i < q; i++)
        {
            scanf(" %s" , str[i]);
            make_trie(str[i] , root);
        }
        int flag = false;
        for(int i = 0; i < q; i++)
        {

            //cout<<"rooy="<<root<<endl;
                        if(process(str[i] , root) == true)
            {
                printf("Case %d: NO\n",o);

                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            printf("Case %d: YES\n",o);
        }
        del(root);

    }



}
