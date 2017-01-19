#include <bits/stdc++.h>

using namespace std;
int a[10000];
int main()
{
    for(int i=1;i<=10000;i++){
        a[i]=i+a[i-1];
    }
    int n;scanf("%d",&n);
    int h=0;
    for(int i=1;n>0;i++){
        if(n-a[i]>=0){
            n-=a[i];
            h++;
        }
        else{
            break;
        }
    }
    cout<<h;

}