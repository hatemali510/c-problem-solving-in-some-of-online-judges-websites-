#include <bits/stdc++.h>

using namespace std;

int main()
{
   int z;scanf("%d",&z);
   int k=0;
   while(z>=1){
        if(z%2){
            k++;
        }
    z/=2;
   }
   printf("%d",z+k);
}