#include <iostream>

using namespace std;

int main()
{
    int x;cin>>x;
    string s;cin>>s;
    int coun=0;
    for(int i=1;i<=x;i++){
        if(s[i]==s[i-1]){
            coun++;
        }
    }
    cout<<coun;
}