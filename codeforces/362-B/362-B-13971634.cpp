#include <bits/stdc++.h>

using namespace std;
int a[3001];
int main()
{
    ios::sync_with_stdio(false);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    if(a[0]==1 || a[m-1]==n){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<m;i++){
        if(a[i]-a[i+1]==-1 && a[i+1]-a[i+2]==-1 && i+2!=m){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}