#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        int f,t;
                scanf("%d%d",&f,&t);
                int cur=f;
                if (t>k)
                   cur-=(t-k);
                mx=max(mx,cur);
    }
    cout<<mx;
}