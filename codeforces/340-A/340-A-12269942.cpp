#include <iostream>
#include <vector>
using namespace std;
int gcd(int x,int y){
if(y==0){
    return x;
}
return gcd(y,x%y);
}

int main()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int n=x*y;
    int l=n/gcd(x,y);
    int res=(b/l)-((a-1)/l);
    cout<<res;
}