#include<cstdio>

int v[100005];

int main (void)
{	
	int n,s,t;
	scanf ("%d%d%d",&n,&s,&t);
	for(int i=1;i<=n;i++)
		scanf ("%d",v+i);

	int r=0;
	for(int i=0;i<n&&s-t;i++)
		s=v[s],r++;

	if(s-t)
		r=-1;
	printf ("%d",r);
	return 0;
}