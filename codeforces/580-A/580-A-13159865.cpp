#include <bits/stdc++.h>
using namespace std;
int nums[100005];
int main()
{
    int x, mx= 0,c=1;
    scanf("%d", &x);
    for (int i = 0; i < x; i++){
        scanf("%d", &nums[i]);
        }

    for (int i = 0; i < x-1; i++)
    {
        if (nums[i] <= nums[i + 1])
        {
            c++;
            mx = max(c, mx);
        }
        else
            c = 1;
    }
    printf("%d",max( 1,mx));
    return 0;
}