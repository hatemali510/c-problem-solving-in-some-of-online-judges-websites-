#include <bits/stdc++.h>
using namespace std;
int x[250],y[250];
int main()
{
    string a,b;cin>>a>>b;
    for(int i=0;i<a.size();i++){
        x[a[i]]++;
    }
    for(int i=0;i<b.size();i++){
        y[b[i]]++;
    }
    int sum=0;
    for(int i=0;i<b.size();i++){
        if(x[b[i]]==0){
            cout<<-1;
            return 0;
        }
    }
    for(int i=0;i<250;i++){
        sum+=min(x[i],y[i]);
    }
    if(sum==0){
        cout<<-1;
        return 0;
    }
    cout<<sum;
}