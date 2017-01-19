#include<cstdio>  
#include<cmath>  
using namespace std;  
  
int main(void)  
{  
    int a,b,c;  
    int m,n;  
    int i;  
    a=b=c=0;  
    scanf("%d%d", &m, &n);  
    for(i=1; i<=6; ++i)  
        if(abs(m-i)>abs(n-i))  
            b++;  
        else if(abs(m-i)<abs(n-i))  
            a++;  
        else  
            c++;  
        printf("%d %d %d", a, c, b);  
        return 0;  
}