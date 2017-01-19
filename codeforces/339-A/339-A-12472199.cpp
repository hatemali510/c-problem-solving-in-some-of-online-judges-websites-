#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    vector<char>v;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='+'){
            a.erase(i,1);
        }
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
            v.push_back(a[i]);
            if(i<a.size()-1){
                v.push_back('+');
            }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}