#include <bits/stdc++.h>

using namespace std;

int main()
{
   int x,y,cont=0;
   scanf("%d%d",&x,&y);
   while(x>0 || y>0){
        if(x==0 ||y==0){
            break;
        }
    x--;y--;
    cont++;
   }
   if(x>0){
    cout<<cont<<" "<<x/2;
   }
   else if(y>0){
    cout<<cont<<" "<<y/2;
   }
   else{
    cout<<cont<<" "<<0;
   }
   return 0;
}