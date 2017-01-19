#include <iostream>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    long long total = 0;
    long long prev = 0;
    long long  k;
    for(int i = 0 ; i < m ; i++){
        cin >> k;
        if(i == 0){
            total -= 1;
        }
        if(k >= prev){
            total += (k - prev);
        }else{
            total += (n - prev) + k;
        }
        prev = k;
    }
    cout << total << endl;
}