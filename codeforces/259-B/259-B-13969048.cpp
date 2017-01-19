#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define MAX 100005
int a[3][3],arr[7];
int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	int r1=a[0][1]+a[0][2], r2=a[1][0]+a[1][2], r3=a[2][0]+a[2][1], c1=a[1][0]+a[2][0], c2=a[0][1]+a[2][1], c3=a[0][2]+a[1][2], d1=a[0][2]+a[2][0], d2;
	int mx = -1;
	arr[0] = r1; arr[1] = r2; arr[2] = r3; arr[3] = c1; arr[4] = c2; arr[5] = c3; arr[6] = d1;
	mx = r1;
	for (int i = 0; i < 6; i++)
		mx = max(arr[i], mx);
	for (int i = 0; i <= 100001; i++)
	{
		a[0][0] = mx - r1;
		a[1][1] = mx - r2;
		a[2][2] = mx - r3;
		d2 = a[0][0] + a[1][1] + a[2][2];
		if (d2 == r1 + a[0][0]&&d1+a[1][1]==d2)
			break;
		else
			mx++;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}