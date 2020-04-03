#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,coin[5]={1,5,10,25,50};
int pos[7500]={};
pos[0] = 1;
    for(int i = 0; i < 5; i++){
        for(int j = coin[i]; j <7500; j++){
            pos[j] += pos[j - coin[i]];  }}
    while(cin>>n){
        cout<<pos[n]<<endl;}
    return 0; }
