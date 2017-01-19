#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n,m;cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<m;i++){
        string a,b;cin>>a>>b;
        mp[a]=b;
    }
    for(int i=0;i<n;i++){
        string h;cin>>h;
        if(mp[h].size()<h.size()){
            cout<<mp[h]<<" ";
        }
        else{
            cout<<h<<" ";
        }
    }

}