#include <bits/stdc++.h>

using namespace std;
int a[51];
int b[51];
int main()
{
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            b[s]=a[i];
            s++;
        }
    }
    
    for(int i=0;i<s-2;i++){
            if(b[i]==b[i+1]-1&&b[i+1]==b[i+2]-1 && b[i]==b[i+2]-2){
                cout<<"YES";
                return 0;
            }
    }
    cout<<"NO";
    return 0;
}