#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;



while(cin >>a>> b)

{


string s1,s2;
string ar[1005];

cin >> s1;

ar[0] = s1;

for(int i = 1; i <a; i++)

{

cin >> s2;

int c = 0;

for(int j =0; j <b; j++)

{

if(s1[j] != s2[j])

c++;

}


ar[c]=s2;

}



for(int i = 0; i <a; i++){

cout<< ar[i]<< endl;


}
}


    return 0;
}
