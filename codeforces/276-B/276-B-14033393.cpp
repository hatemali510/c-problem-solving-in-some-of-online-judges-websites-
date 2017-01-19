#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int ca[250];
int main()
{
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int sz;
	sz = s.size();
	for (int i = 0; i < sz; i++)
		ca[s[i]]++;
	bool found = false;
	int sum = 0;
	for (int i = 0; i < sz; i++)
	{
		if (ca[s[i]] % 2 && !found){
			found = true;
		}
		else if (ca[s[i]] % 2 && found){
			ca[s[i]]--;
		}
		sum += ca[s[i]];
		
	}
	int sol = sz - sum;
	if (sol % 2){
		cout << "Second";
	}
	else{
		cout << "First";
	}
	return 0;
}