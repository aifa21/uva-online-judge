#include <bits/stdc++.h>

using namespace std;

int main()
{string s;
 while(getline(cin,s)) {
  int i, m = 0, ct = 0;
  for(i = 0; i<s.size(); i++) {
   if((s[i] >= 'A' && s[i] <= 'Z') ||
    (s[i] >= 'a' && s[i] <= 'z'))
     m = 1;
   else {
    ct += m;
    m = 0;   } }

  ct += m;
  printf("%d\n", ct);  }
    return 0;}

