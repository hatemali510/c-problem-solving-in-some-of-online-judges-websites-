#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[105];
    int n,c;scanf("%d%d",&n,&c);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int mx=0;
    for(int i=1;i<n;i++){
        int dif=a[i-1]-a[i]-c;
        if(dif>mx){
            mx=dif;
        }
    }
    cout<<mx;
}