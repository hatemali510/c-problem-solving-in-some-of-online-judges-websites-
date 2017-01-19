#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);
   double  r,x,y,x_,y_;
   cin>>r>>x>>y>>x_>>y_;
   double dis=(x-x_)*(x-x_)+(y-y_)*(y-y_);
   dis=sqrt(dis);
   double i;
   for(i=0;i<10000000;i++){
    if((i*r)>=dis/2){
        break;
    }
   }
   cout<<i;
}