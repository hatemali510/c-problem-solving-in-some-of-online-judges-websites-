#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    vector <int> v;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        int d;
        cin>>d;
        v.push_back(d);
           }
           x=0;
    for(int i=0;i<v.size();i++){
       if(v[i]-v[i+1]!=0 && i!=v.size()-1){
        x++;
       }
    }
    cout<<x+1;
}