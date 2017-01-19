#include <bits/stdc++.h>
using namespace std;
int x[105];
int y[105];
int main(){

int a;
scanf("%d",&a);
for(int i=0;i<a;i++)
{
   int h,w; scanf("%d%d",&h,&w);
   x[i]=h;
   y[i]=w;
}
int c=0;

for(int i=0;i<a;i++)
{
for(int j=0;j<a;j++)
{
if(x[i]==y[j]){
c++;
}
}
}
cout<<c;
return 0;
}