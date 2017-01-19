#include<iostream>
using namespace std;

int main(){

    int a,b,c,d,m,v;
    cin >> a >> b >> c >> d;
    m = max((3*a)/10,a-(a/250)*c);
    v = max((3*b)/10,b-(b/250)*d);
    if(m == v){
        cout << "Tie" << endl;
    }
    else if(m > v){
        cout << "Misha" << endl;
    }
    else{
        cout << "Vasya" << endl;
    }
    return 0;
}