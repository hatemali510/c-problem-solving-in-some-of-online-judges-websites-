#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    int x,sum=0;cin>>x;
    for(int i=0;i<x;i++){
        for(int j=0;j<4;j++){
            int n;cin>>n;
            v.push_back(n);
        }
        sum+=((v[2]-v[0])+1)*((v[3]-v[1])+1);
        v.clear();
    }
    cout<<sum;
    return 0;
}