#include <iostream>
using namespace std;
string mak="Mishka";
string chr="Chris";
string fri="Friendship is magic!^^";
int  main() {
	int n;cin>>n;
	int m=0,c=0;
	for(int i=0;i<n;i++){
		int x,y;cin>>x>>y;
		if(x>y){
			m++;
		}
		else if(y>x){
			c++;
		}
		else{
			continue;
		}
	}
	if(m>c) {
		cout<<mak;
		return 0;
	}
	if(c>m) {
		cout<<chr;
		return 0;
	}
	cout<<fri;
	return 0;
}