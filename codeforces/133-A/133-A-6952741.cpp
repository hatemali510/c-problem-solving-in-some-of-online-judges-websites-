#include <iostream>

using namespace std;

int main()
{
    int x=0;
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='Q' || a[i]=='H' || a[i]=='9'){
            x++;
        }

    }
    if(x>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;

}