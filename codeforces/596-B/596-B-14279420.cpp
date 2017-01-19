#include <bits/stdc++.h>

using namespace std;
int b[200009];
int main()
{
   long long int n;cin>>n;
   for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    b[i]=x;
   }
   long long int  s=0;
   for(int i=1;i<=n;i++){
    long long int  dif=b[i]-b[i-1];
    if(dif<0){
        s+=abs(dif);
    }
    else if(dif>0){
        s+=dif;
    }
   }
   cout<<s;
   return 0;
}