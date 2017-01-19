#include <bits/stdc++.h>

using namespace std;
int  lucky(string s){
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4'|| s[i]=='7'){
            ans++;
        }
    }
    return ans;
}
int main()
{
    int ans=0;
    int n,k;scanf("%d%d",&n,&k);
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(lucky(s)<=k){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}