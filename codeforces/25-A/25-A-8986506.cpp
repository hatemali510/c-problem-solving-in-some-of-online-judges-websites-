#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a;
    int n,h,odd=0,even=0;
    cin>>n;
   for(int i=0;i<n;i++){
    cin>>h;
    if(h%2==0){
        even++;
    }
    else{
        odd++;
    }
    a.push_back(h);
   }
   if(even>odd){
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            cout<<i+1;
            break;
        }
    }
   }
   if(odd>even){
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<i+1;
            break;
        }
    }
   }
   return 0;
}