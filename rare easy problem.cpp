#include<stdio.h>
/*
think deeply you will get an equation like this N-N/10=(N-M).
here (N-M) is given for you so the equation for getting
N is N=((N-M)*10)/9. now you will get value of N.
From N substitute 1 to check if N-1 also satisfy conditions.
I mean if (N-1)-(N-1)/10==(N-M) then output both of them otherwise
 output only N.*/
int main()
{
    unsigned long long int n;

    while(scanf("%llu",&n)==1 && n!=0)
    {
       unsigned  long long int s,q,t;

        s=(n*10)/9;
        q=s-1;

       // t=q-(q/10);

       /* if(t==n)
        {
            printf("%llu %llu\n",q,s);
        }*/
        if(n%9==0)
        {
            printf("%llu %llu\n",q,s);
        }
        else
        {
            printf("%llu\n",s);
        }

    }

    return 0;
}
