#include <bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int main()
{
    int n1,n2;scanf("%d%d",&n1,&n2);
    int k,m;scanf("%d%d",&k,&m);
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
        if(a[k-1]<b[n2-m]){
           cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        return 0;
    }