#include <iostream>

using namespace std;
int a[1000001];
int main()
{
   long long int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    long long int sum=a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i-1]-a[i]>0){
            int x=n-a[i-1]+a[i];
           sum+=x;
        }
        else if(a[i-1]-a[i]<0){
            sum+=a[i]-a[i-1];
        }
        else{
            continue;
        }
    }
    cout<<sum;
    return 0;
}