#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;scanf("%d",&x);
    string a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<x;i++){
        int n1,n2;
        n1=a[i]-'0';
        n2=b[i]-'0';
        int d=abs(n1-n2);
        if(d<=4){
            ans+=d;
        }
        else{
            ans+=(9-d)+1;
        }
    }
    cout<<ans;
}