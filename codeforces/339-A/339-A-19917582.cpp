#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   vector<int> v;
   string a;cin>>a;
   for(int i=0;i<a.size();i++){
     if(a[i]!='+'){
        v.push_back(a[i]-'0');
     }
   }
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
     cout<<v[i];
     if(i<v.size()-1){ cout<<"+";}
   }
    return 0;
}