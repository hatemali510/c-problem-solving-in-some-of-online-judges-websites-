#include <bits/stdc++.h>
using namespace std;
int a[100002];
int main()
{
    ios_base::sync_with_stdio(0);
    int x;cin>>x;
    int c=0;
    int pos;
    for(int i=1;i<=x;i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            c++;
        }
        else{
            pos=i-1;
        }
    }
    if(c==x){
        cout<<0;
    }
    else if(c<x-1){
        cout<<-1;
    }
    else{
        if(a[x]<=a[1]){
            cout<<x-pos;
        }
        else{
            cout<<-1;
        }
    }
    return 0;

}