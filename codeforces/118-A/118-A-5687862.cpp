#include <cstdio>
int main()
{
    char str[101];
    char vowels[]="aoyeui";
    while(gets(str)){
        for(int i = 0; str[i]; i++){
            int judge = 0;
            if(str[i] >= 65 && str[i] <= 90)    str[i] += 32;
            for(int j = 0; j < 6; j++)
                if(str[i] == vowels[j])  judge = 1;
            if(judge)   continue;
            printf(".%c", str[i]);
        }
        puts("");
    }
    return 0;
}