#include <bits/stdc++.h>

using namespace std;
pair<int, int> arr[1001];
int main()
{
    
    int s,n;scanf("%d%d",&s,&n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(s<=arr[i].first){
            cout<<"NO";
            return 0;
        }
        else{
            s+=arr[i].second;
        }
    }
    cout<<"YES";
    return 0;
}