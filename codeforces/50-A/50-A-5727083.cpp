#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a*b;
    if(c%2==0){
        cout<<c/2;
    }
    else if(c%2==1){
     cout<<((a*b)-1)/2;
    }

}