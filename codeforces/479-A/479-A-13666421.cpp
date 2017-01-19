#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;scanf("%d%d%d",&a,&b,&c);
    int ans = a + b + c;
    ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);

	cout << ans << endl;
}