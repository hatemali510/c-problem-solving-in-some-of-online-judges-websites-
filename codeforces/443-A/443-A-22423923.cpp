#include <iostream>
#include <set>
using namespace std;
 
int main() {
	// your code goes here
	string a;
	set<char> s;
	getline(cin,a);
	for(int i=0;i<a.size();i++){
		if((int)a[i]>=97 && (int)a[i]<=122){
			s.insert(a[i]);
		}
	}
	cout<<s.size();
	return 0;
}