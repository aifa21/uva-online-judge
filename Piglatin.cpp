#include <bits/stdc++.h>

using namespace std;
char ch, p;
int main()
{
   while(scanf("%c",&ch)==1)
   {
       if(isalpha(ch))
       {
           if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
           {
               while(isalpha(ch))
               {
                   putchar(ch);
                   ch=getchar();
               }
               printf("ay");
           }
           else
            {

            p=ch;
            ch=getchar();
            while(isalpha(ch))
               {
                   putchar(ch);
                   ch=getchar();
               }
               printf("%cay",p);

           }
       }
       putchar(ch);
   }
    return 0;
}
