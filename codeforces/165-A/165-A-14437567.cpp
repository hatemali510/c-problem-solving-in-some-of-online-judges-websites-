#include <bits/stdc++.h>

using namespace std;
pair<int,int> p[201];
int main()
{
   int n;scanf("%d",&n);
   for(int i=0;i<n;i++){
        scanf("%d%d",&p[i].first,&p[i].second);
   }
   int ans=0;
   for(int i=0;i<n;i++){
        int r=0,l=0,d=0,u=0;
    for(int j=0;j<n;j++){
        if(p[i].first==p[j].first){
            if(p[j].second<p[i].second){
                d++;
            }
            if(p[j].second>p[i].second){
                u++;
            }
        }
        else if(p[i].second==p[j].second){
            if(p[j].first<p[i].first){
                l++;
            }
            if(p[j].first>p[i].first){
                r++;
            }
        }
    }
    if(r&&l&&u&&d){
        ans++;
    }
   }
   cout<<ans;
}