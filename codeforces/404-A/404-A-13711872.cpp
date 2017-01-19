#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n,i,j,ans=1;
    char d,oc;
    string s;
    vector <string> t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        t.push_back(s);
    }
    d=t[0][0];
    oc=t[0][1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if( (t[i][j]!=d && ( i+j==n-1 || i==j) ) || (t[i][j]!=oc && !( i+j==n-1 || i==j) ) || oc==d )
                            ans=0;
        }
    }
    if(ans)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}