#include<iostream>
#include<algorithm>
using namespace std;
int main ( ) {

	int n, a, b, c, k;
	cin >> n >> a >> b >> c;
	int ans = 0;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= n; j++) {
			k = (n - i * a - j * b) / c;
			if(k < 0) continue; // da el line el zadto bs
			if (i * a + j * b + k * c == n) 
				if (ans < i + j + k) 
					ans = i + j + k;
		}

	cout << ans << "\n";
	return 0;
}