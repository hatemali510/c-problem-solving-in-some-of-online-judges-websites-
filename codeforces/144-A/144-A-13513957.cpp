#include <bits/stdc++.h>

using namespace std;
int a[100];
int main()
{
    int x;scanf("%d",&x);
    int mx=0;
    int s=101;
    int i_m,i_s;
    int ans=0;
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
        if(a[i]<=s){
            s=a[i];
            i_s=i;
        }
        if(a[i]>mx){
            mx=a[i];
            i_m=i;
        }
    }
    int flag=0;
    if(i_s<i_m)
        flag=1;
    cout<<x-1-i_s+i_m-flag<<endl;

    return 0;
}