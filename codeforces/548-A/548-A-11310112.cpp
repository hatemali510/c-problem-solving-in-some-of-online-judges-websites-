#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int y; cin>>y;
    int x=a.length()/y;
    if(a.size()%y==0){
    while (y>0){
        string a2=a.substr(0,x);
        if (a2== string(a2.rbegin(), a2.rend())) {
            a.erase(0,x);
        }
        y--;
        }
    }

    if(a.length()>=1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;

}