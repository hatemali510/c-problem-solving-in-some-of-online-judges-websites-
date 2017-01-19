#include <iostream>

using namespace std;

int main()
{
    string a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a.size()>10){
            cout<<a[0]<<(a.size())-2<<a[a.size()-1];
            cout<<endl;
        }
        else {
            cout<<a;
            cout<<endl;
        }

    }

}