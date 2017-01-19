#include <bits/stdc++.h>
typedef long long ll;
int in[100005][2];
int ans[100005][2];
int home[100005];
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &in[i][0], &in[i][1]);
		home[in[i][0]]++;
	}
	for (int i = 0; i < n; i++)
	{
		ans[i][0] = n - 1;
		ans[i][0] += home[in[i][1]];
		ans[i][1] = 2 * (n - 1) - ans[i][0];
	}
	for (int i = 0; i < n; i++)
		printf("%d %d\n", ans[i][0], ans[i][1]);
	return 0;
}