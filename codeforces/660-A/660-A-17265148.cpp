#include <bits/stdc++.h>

using namespace std;
int a[1001];
int gcd(int a,int b){
    if (b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    vector <int> p;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<0<<endl;
        cout<<a[0];
        return 0;
    }
    for(int i=0;i<n;i++){
        p.push_back(a[i]);
        if(i + 1 < n&&gcd(a[i],a[i+1])>1){
            p.push_back(1);
        }
    }
    cout<<p.size()-n<<endl;
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    return 0;
}