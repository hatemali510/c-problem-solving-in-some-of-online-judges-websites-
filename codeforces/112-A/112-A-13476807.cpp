#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int ans=0;
    if(a==b){
        cout<<0;
        return 0;
    }
    for(int i=0;i<a.size();i++){
        if(isupper(a[i])){
            a[i]=tolower(a[i]);
        }
        if(isupper(b[i])){
            b[i]=tolower(b[i]);
        }
        if(a[i]>b[i]){
            ans=1;
            break;
        }
        if(a[i]<b[i]){
            ans=-1;
            break;
        }
    }
    cout<<ans;
    return 0;


}