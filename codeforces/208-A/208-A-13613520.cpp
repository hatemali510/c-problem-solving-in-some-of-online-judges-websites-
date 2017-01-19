#include <bits/stdc++.h>

using namespace std;

int main()
{
   string a;
   cin>>a;
   bool found=1;
   while(found){
    if(a.find("WUB")!=string::npos){
        int x=a.find("WUB");
        a.replace(a.begin()+x,a.begin()+x+3," ");
    }
    else{
        found=0;
    }
   }
   if(a[0]==' '){
    a.erase(a.begin());
   }
   cout<<a;
}