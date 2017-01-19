#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;scanf("%d",&n);
	int h=0;
	for(int i=0;i<n;i++){
		int x,y,z;scanf("%d%d%d",&x,&y,&z);
		if(x+y+z >=2){
			h++;
		}
	}
	cout<<h;
	return 0;
}