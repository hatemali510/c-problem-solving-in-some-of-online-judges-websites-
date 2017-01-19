#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
    std::set<int> myset;
    std::set<int>::iterator it;
    vector <int> v;
    int x,y; cin>>x>>y;
    for(int i=0;i<x;i++){
        int n; cin>>n;
        int j=0;
        while(j<n){
            int k; cin>>k;
            v.push_back(k);
            j++;
        }
        for(int c=0;c<v.size();c++){
            if(y>v[c]){
                myset.insert(i+1);
            }
        }
        v.clear();
    }
    if(myset.empty()){
        cout<<0;
        return 0 ;
    }
    cout<<myset.size()<<endl;
    for (it=myset.begin(); it!=myset.end(); ++it){
    std::cout<< *it << ' ' ;
    }

    return 0;

}