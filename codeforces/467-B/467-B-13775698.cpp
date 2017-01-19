#include <bits/stdc++.h>

using namespace std;
int a[1001];
int b[1000];
int cont(int x){
    int c=0,binaryNumber;
    while(x!=0){
         binaryNumber= x % 2;
         if(binaryNumber==1){
            c++;
         }
         x = x / 2;
    }
    return c;
}
int main()
{
    int n,m,k;scanf("%d%d%d",&n,&m,&k);
    for(int i=0;i<=m;i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=0;i<m;i++){
        if(cont(a[i]^a[m])<=k){
           c++;
        }
    }
    cout<<c;
}