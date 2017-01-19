#include <bits/stdc++.h>

using namespace std;
bool disn(int x){
    int a[4];
    for(int i=0;i<4;i++){
        a[i]=x%10;
        x=x/10;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i]==a[j] && i!=j){
                return false;
            }
        }

    }
    return true;
}
int main()
{

    int x;cin>>x;
    bool found=false;
    x++;
    while(!found){
        if(disn(x)){
            cout<<x;
            found=true;
        }
        x++;
    }

    return 0;
}