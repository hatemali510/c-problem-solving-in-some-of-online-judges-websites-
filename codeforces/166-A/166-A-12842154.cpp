#include <bits/stdc++.h>
using namespace std;
vector< pair<int,int> > p;
bool pairCompare(const pair<int,int>& firstElem, const std::pair<int,int>& secondElem) {
  return firstElem.first > secondElem.first ||(firstElem.first==secondElem.first && firstElem.second<secondElem.second);
}
int main()
{
    int n,k;scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        int x,z;scanf("%d%d",&x,&z);
        p.push_back(make_pair(x,z));
    }
    sort(p.begin(),p.end(),pairCompare);    
    int l=k-1,r=k-1;
    while(l>0&&p[l-1].first==p[l].first && p[l-1].second==p[l].second){
            l-=1;
    }
    while(r+1<n &&p[r+1].first==p[r].first && p[r+1].second==p[r].second){
            r+=1;
    }
    cout<<r-l+1;
    return 0;
}