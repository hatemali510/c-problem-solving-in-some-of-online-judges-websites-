#include <iostream>

using namespace std;
int a[100001];
int main()
{
   int n;cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int j=0,m=0;
   for(int i=0;i<n-1;i++){
    if(a[i]<a[i+1]){
        j++;
        m=max(m,j);
    }
    else{
        j=0;
    }
   }
   cout<<m+1;
}