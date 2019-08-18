#include <bits/stdc++.h>

using namespace std;
int arr[105],ar1[105];
char nm[105][105];
bool cmp(int a,int b)
{
    if(arr[a]!=arr[b])
       return arr[a]<arr[b];
    return strcasecmp(nm[a],nm[b])<0;
}
int main()
{
    int n;
   while(cin>>n){

    for(int i=0;i<n;i++)
    {
        string ss;
        int a,b,c;
        scanf("%s : %d min %d sec %d ms",&nm[i],&a,&b,&c);
        arr[i]=((a*60000)+(b*1000)+c);
        ar1[i]=i;
      //  cout<<"ar1"<<ar1[i]<<" "<<i<<endl;
    }
     //sort(arr,arr+n,cmp);
    sort(ar1,ar1+n,cmp);


    int r=0;
    for(int i=0;i<n;i+=2)
    {   r++;
        printf("Row %d\n",r);
        if(i==(n-1))
        {
            printf("%s\n",nm[ar1[i]]);
        }
        else{
            printf("%s\n",nm[ar1[i]]);
            printf("%s\n",nm[ar1[i+1]]);
        }
    }
    cout<<endl;
   }
    return 0;
}
