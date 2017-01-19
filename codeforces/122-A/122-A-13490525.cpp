#include <bits/stdc++.h>
using namespace std;
bool islucky(int x){
    while(x){
        int i=x%10;
        if(i==4 || i==7){
            x=x/10;
        }
        else{
            return false;
        }
    }
    return true ;
}
int main()
{
    int x;scanf("%d",&x);
   if(islucky(x)){
        cout<<"YES";
        return 0;
   }
    for(int i=2;i<=x;i++){
        if((islucky(x)||islucky(x/i)) && x%i==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}