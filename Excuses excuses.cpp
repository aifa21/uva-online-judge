#include <bits/stdc++.h>

using namespace std;
string convert(string sent)
{
    for(int i=0;i<sent.length();i++)
    {
        sent[i]=tolower(sent[i]);
    }
    return sent;
}
int contain(string word,string keyw)
{
    string ss="";
    int ct=0;
    for(int i=0;i<word.length();i++)
    {
        if(!isalpha(word[i]))
        {

            if(ss==keyw)
            {
                ct++;
                 //cout<<"...."<<ct<<endl;
               // ss="";
            }
            ss="";
        }
        else{
            ss+=word[i];
        }

    }
    if(ss==keyw)
        {
            ct++;
            //cout<<"...."<<ct<<endl;
        }

        return ct;

}
int main()
{int k,e,m[1000];
     string key[1000],sen[100],sen1[100];
     int tc=1;
    while(cin>>k>>e){
        //int tc=0;
        memset(m,0,sizeof(m));
       // string key[1000],sen[100],sen1[100];
        getchar();
        for(int i=0;i<k;i++){
           getline(cin,key[i]);
        }
for(int i=0;i<e;i++)
        {
            getline(cin,sen[i]);
            sen1[i]= convert(sen[i]);
        }



        for(int i=0;i<e;i++)
        {
            for(int j=0;j<k;j++)
            {
                m[i]+= contain(sen1[i],key[j]);
                //printf("m[%d]= %d\n",i,m[i]);
            }
        }
       // int mx=1;
        vector<int>v;
        int mx=0;
   for(int i=0;i<e;i++)
   {
      if(mx<m[i])
      {
          v.clear();
          v.push_back(i);
          mx=m[i];
      }
      else if(mx==m[i])
      {
          v.push_back(i);
      }
   }
    cout<<sen[v[1]]<<endl;
    cout << "Excuse Set #" << tc << endl;
		/*for(int i=0;i<v.size();i++){

                cout<<sen[v[i]]<<endl;}*/
    cout<<endl;
    tc++;
    }
    return 0;}
