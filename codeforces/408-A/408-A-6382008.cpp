#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
    int n, k[105], m, cnt, min;
    min=INT_MAX;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &k[i]);
    for(int i=0; i<n; i++) {
        cnt=0;
        for(int j=0; j<k[i]; j++) {
            scanf("%d", &m);
            cnt+=m*5;
            cnt+=15;
        }
        if(cnt<min) min=cnt;
    }
    printf("%d", min);
    return 0;
}