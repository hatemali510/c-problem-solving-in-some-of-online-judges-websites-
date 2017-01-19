#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;scanf("%d",&x);
    int z=(x/5);
    if(x%5){
        cout<<z+1;
    }
    else{
        cout<<z;
    }
    return 0;

}