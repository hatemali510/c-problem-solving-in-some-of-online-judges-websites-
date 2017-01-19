#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,x_it,y_it;
    cin>>n;
    set<int> x;
    cin>>x_it;
    for (int i=1;i<=x_it; ++i){
            int input;
            cin>>input;
            x.insert(input);
    }
    cin>>y_it;
    for (int i=1;i<=y_it; ++i){
            int input;
            cin>>input;
        x.insert(input);
    }

    if(x.size()==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    return 0;


}