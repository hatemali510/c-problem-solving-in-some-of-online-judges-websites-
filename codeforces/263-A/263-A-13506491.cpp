#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5][5];
    int r,c;;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]){
                 r=i+1;
                 c=j+1;
                break;
            }

        }
    }
    cout<<abs(3-r)+abs(3-c);
}