#include <bits/stdc++.h>

using namespace std;
bool cmp(string a, string b)
{
    return a.size() < b.size();
}
bool check(string ss, string ss1)
{
    for(int i=0; i<ss.size(); i++)
    {
        if(ss[i] != ss1[i])
            return false;
    }
    return true;
}

  int main() {
      string s;
      vector<string>vs;
      int c=1;
      while(cin>>s)
      {
          if(s=="9")
          {

sort(vs.begin(), vs.end(), cmp);

          bool f=false;
          for(int i=0;i<vs.size()&&!f;i++)
          {
              for(int j=i+1;j<vs.size()&&!f;j++)
              {
                  string ss= vs[i];
                  string ss1=vs[j];
                  cout<<ss<<" "<<ss1<<endl;

                    if(check(ss,ss1)==true)
                    {
                        f=true;
                        break;
                    }

              }

          }
          if(f)
          {
              printf("Set %d is not immediately decodable\n",c++);
          }
          else{
            printf("Set %d is immediately decodable\n",c++);
          }
          vs.clear();
      }
      else{
        vs.push_back(s);
      }}

}
