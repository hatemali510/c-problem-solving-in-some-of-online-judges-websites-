#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>::iterator it;
    set <char> k;
    string a;
    getline(cin,a);

    for(int i=0;i<a.size();i++){
        if(isalpha(a[i])){
        k.insert(a[i]);
        }
    }

    cout<<k.size();
}