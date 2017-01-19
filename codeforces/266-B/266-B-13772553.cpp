#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,t;scanf("%d%d",&n,&t);
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            v.push_back(1);
        }
        else{
            v.push_back(0);
        }
    }
    for(int j=0;j<t;j++){
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            swap(v[i],v[i-1]);
            i++;
        }
    }
    }
    for(int i=0;i<n;i++){
        if(v[i]==1){
            cout<<'B';
        }
        else{
            cout<<'G';
        }
    }



}