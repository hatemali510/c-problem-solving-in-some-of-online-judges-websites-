#include <iostream>
using namespace std;
 
int main() {
	int x;cin>>x;
	int ans=0;
	for(int i=0;i<x;i++){
		string s;cin>>s;
		if(s[0]=='X'){
			if(s[1]=='-'){
				ans--;
			}
			if(s[1]=='+'){
				ans++;
			}
		}
		else{
			if(s[0]=='+'){
				++ans;
			}
			if(s[0]=='-'){
				--ans;
			}
 
		}
	}
	cout<<ans;
	return 0;
}