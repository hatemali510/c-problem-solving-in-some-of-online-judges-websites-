#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int c1,t,tc;
   cin>>c1>>t>>tc;
   int sum=0;
   for(int i =1;i<=tc;i++){
    sum=sum+(c1*i);
   }
   if(t>sum){
    cout<<0;
   }
   else{
    t=t-sum;
    cout<<abs(t);
   }
}