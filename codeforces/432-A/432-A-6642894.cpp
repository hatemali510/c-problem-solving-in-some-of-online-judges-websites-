#include <iostream>
#include <vector>

using namespace std;
int main(){
int n,h,k;
vector<int>a;
cin>>n>>h;
for(int i=0;i<n;i++){
cin>>k;
a.push_back(k);
}
int cnt = 0;

for(int i = 0; i < n; i++){
    if ((5 - a[i]) >= h){
        cnt++;}
        }
//cout<<cnt<<endl;
int ans = cnt / 3;
cout<<ans;


return 0;
}