#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    stack <char> s;
    for(int i=a.size()-1;i>=0;i--){
        if(i==a.size()-1){
            s.push(a[i]);
        }
       else  if(!s.empty()&&a[i]==s.top()){
            s.pop();
        }
        else{
            s.push(a[i]);
        }
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}