#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int in[101][101], gen[101][101], expc[101][101];
int r, c;
void zrow(int i,int j)
{
	for (int k = 0; k < c; k++)
		gen[i][k] = 0;
	for (int k = 0; k < c; k++)
		gen[k][j] = 0;
}
bool ons(int i, int j)
{
	bool ret = false;
	for (int k = 0; k < c; k++)
	{
		if (gen[i][k])
		{
			ret = true;
			break;
		}
	}
	for (int k = 0; k < c&&!ret; k++)
	{
		if (gen[k][j])
		{
			ret = true;
			break;
		}
	}
	return ret;
}
int main()
{
	ios::sync_with_stdio(false);
	scanf("%d%d", &r, &c);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			gen[i][j] = 1;
	}
	bool match=true;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			scanf("%d", &in[i][j]);
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (in[i][j] == 0)
				zrow(i, j);
		}
	}
	for (int i = 0; i < r&&match; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (in[i][j] == 1)
			{
				if (!ons(i, j))
				{
					match = false;
					break;
				}
			}
		}
	}
	if (match)
	{
		printf("YES\n");
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
				printf("%d ", gen[i][j]);
			printf("\n");
		}
	}
	else
		printf("NO");
	return 0;
}