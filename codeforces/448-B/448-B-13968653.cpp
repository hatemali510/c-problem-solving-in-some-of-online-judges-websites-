#include <bits/stdc++.h>

using namespace std;
int a[26];
int b[26];
int main()
{
    string s,t;
    cin>>s>>t;
    int i,j;
    int sz=s.size();
    int sz2=t.size();
    for( i=0;i<sz;i++){
        a[s[i]-'a']++;
    }
    for( i=0;i<sz2;i++){
        b[t[i]-'a']++;
    }
    for(i=0;i<26;++i)
    if(a[i]<b[i])break;

	if(i<26)
		printf("need tree\n");
	else{
		for(i=j=0;i<sz2&&j<sz;++i,++j)
        while(j<sz&&s[j]!=t[i])
            ++j;
		printf("%s\n",i<sz2?(sz==sz2?"array":"both"):"automaton");
	}
    return 0;
}