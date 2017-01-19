#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;
   int sum,limit;scanf("%d%d",&sum,&limit);
   int low_b;
   int l_sum=0;
   for(int i=limit;i>=1;i--){
    low_b=i & -i;
        if(sum>=low_b){
        a.push_back(i);
        sum-=low_b;
        }
    if(sum==0){
        break;
    }
   }
   if(sum>0){
    printf("%d",-1);
   }
   else{
        int d=a.size();
        printf("%d\n",d);
    for(int i=0;i<a.size();i++){
        printf("%d ",a[i]);
    }
   }
   return 0;
}