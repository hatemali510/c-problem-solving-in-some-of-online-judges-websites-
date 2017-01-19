#include <iostream>
using namespace std;
string one="I hate that";
string two="I love that";
int main() {
	int x;cin>>x;
	for(int i=0;i<x;i++){
		if(i%2){
			cout<<"I love ";
		}
		else{
			cout<<"I hate ";
		}
		if(i==x-1){
			cout<<"it";
		}
		else{
			cout<<"that ";
		}
	}
	return 0;
}