#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x,y;scanf("%d%d",&x,&y);
            if(x||y){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;

}