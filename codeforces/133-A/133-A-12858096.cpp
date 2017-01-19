#include <iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
bool found=false;
    for(int i=0;i<a.size();i++){
        if(a[i]=='H' ||a[i]=='Q' ||a[i]=='9'){
           found=true;
           break;
        }
    }
   if(found){
cout<<"YES";
return 0;
}
cout<<"NO";
return 0;

}