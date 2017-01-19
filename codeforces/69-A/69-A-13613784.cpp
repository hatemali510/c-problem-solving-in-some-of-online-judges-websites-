#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x_x=0,y_y,z_z=0;
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        x_x+=x;y_y+=y;z_z+=z;
    }
    if(x_x || y_y || z_z){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
}