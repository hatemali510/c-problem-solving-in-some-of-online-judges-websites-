#include <bits/stdc++.h>
using namespace std;
#define sz(v) (int)v.size()

int a[100001];

bool valid(int m, vector<int> &v, int t) {
	if (v[m - 1] <= t)
		return true;
	for (int i = m; i < sz(v); i++) {
		if(v[i] - v[i - m] <= t) return true;
	}
	return false;
}
int main()
{
   int n, t;
   ios::sync_with_stdio(false);
   scanf("%d%d", &n, &t);
   vector<int> v(n);
   for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
		if (i)
        v[i] += v[i - 1];
   }
   int s=0,e=n;
   while (s < e) {
		int mid = s + (e - s + 1) / 2;
		if (valid(mid, v, t))
			s = mid;
		else
			e = mid - 1;
	}
	cout<<s;
}