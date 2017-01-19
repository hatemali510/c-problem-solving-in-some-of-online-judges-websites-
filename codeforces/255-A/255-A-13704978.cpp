#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;scanf("%d",&n);
    int k;
    vector<int> v;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        v.push_back(k);
    }
    if(n==2){
        if(v[0]>v[1]){
            cout<<"chest";
        }
        else{
            cout<<"biceps";
        }
        return 0;
    }
    if(n==1){
        cout<<"chest";
        return 0;
    }
    int a[3]={0};
    int it=0,i=0;
    int mx=0;
    while(i<n){
        if(i==3){
            i=0;
            n-=3;
        }
        a[i]+=v[it];
        if(a[i]>mx){
            mx=a[i];
        }
        i++;it++;
    }
    int ans;
    for(int i=0;i<3;i++){
        if(mx==a[i]){
            ans=i+1;
        }
    }
    if(ans==1){
        cout<<"chest";
    }
    else if(ans==2){
        cout<<"biceps";
    }
    else{
        cout<<"back";
    }
    return 0;

}