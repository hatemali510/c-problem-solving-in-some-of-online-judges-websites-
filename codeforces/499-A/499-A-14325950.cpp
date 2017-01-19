#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, x;
    scanf("%d %d", &n, &x);
    int start = 1;
    int counter = 0;
    while (n-- > 0) {
        int l, r;
        scanf("%d %d", &l, &r);
        counter += (l - start) % x;
        counter += (r - l) + 1;
        start = r + 1;
    }
    printf("%d", counter);
}