#include <bits/stdc++.h>

using namespace std;
int wrd[200];
int main()
{   char ch;
int ct=0;
int h=0;
    while(scanf("%c",&ch)==1)
    {


        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            ct++;
            h=0;

        }
       else  if(h==0&&(ch==' '||ch=='\n'||ch=='.'||ch=='?' ||ch=='!'||ch==','))
        {
           // cout<<"ct="<<ct<<endl;
           if(ct>0){
            wrd[ct]++;
           }
            ct=0;
        }
       else  if(ch=='-')
        {
            h=1;
        }
        else if(h==1&&ch=='\n')
        {
            continue;
        }



        if(ch=='#'){
                ct=0;
    for(int i=0;i<100;i++)
        {
            if(wrd[i]!=0)
            {


            printf("%d %d\n",i,wrd[i]);
            }
            wrd[i]=0;
        }
        cout<<endl;
            }

//printf("\n");
    }

    return 0;
}

/*
aifa far
aifa! q far-
que dt'u ice-cream
*/
