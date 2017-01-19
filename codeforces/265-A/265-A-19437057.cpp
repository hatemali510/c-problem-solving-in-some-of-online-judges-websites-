#include <iostream>

using namespace std;

int main()
{
   int j=0;
   string s,a;cin>>s>>a;
   for(int i=0;i<a.size();i++){
    if(a[i]==s[j]){
        j++;
    }
   }
   cout<<j+1;
}