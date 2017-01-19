#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k,a[100]={0},count=0;
    cin >> n;
    cin >> k;
    k--;
    for(int i=0;i<n;i++){
            cin>>a[i];}
    for(int j=0;j<n;j++){
            if( a[j] >= a[k] && a[j] > 0 )
            count ++;}
            
                     cout<<count;
                     
            
            
                    
    return 0;
}