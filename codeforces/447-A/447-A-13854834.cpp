#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[300];
    int ans=0;
    bool f=false;
    int x,y;cin>>x>>y;
    map<int,int> mp;
    for(int i=0;i<y;i++){
       int d;cin>>d;
       int mod=d%x;
       if(i==0){
        a[i]=mod;
        continue;
       }
       for(int j=0;j<i;j++){
            if(a[j]==mod){
                ans=i+1;
                f=true;
                break;
            }
       }
       if(!f){
       a[i]=mod;
       }
       else{
        break;
       }
    }
    if(ans!=0){
        cout<<ans;
    }
    else{
        cout<<-1;
    }
    return 0;

}