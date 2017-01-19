#include <bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   cin>>a;
   int x=0;
   for(int i=0;i<a.length();i++){ //start from 0 to size-1
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
              x++; 
        }
   }
   if(x){ 
        cout<<"YES"<<endl;
        return 0;
   }
   cout<<"NO"<<endl;
   return 0;
}