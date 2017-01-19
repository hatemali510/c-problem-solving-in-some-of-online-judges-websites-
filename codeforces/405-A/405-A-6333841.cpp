#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool myfunction (int i,int j) { return (i<j); }


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),myfunction);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}