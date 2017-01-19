#include <bits/stdc++.h>

using namespace std;

int main()
{
   int z;scanf("%d",&z);
   int k=0;
   while(z>1){
        if(z&1){
            k++;
        }

    z=z>>1;
   }
   printf("%d",k+1);
}