#include <bits/stdc++.h>

using namespace std;
char a[8][8];
int calw(int x,int y){
    int sum=0;
    for(int i=x;i>=1;i--){
        if(a[i][y]=='B'){
            return 0;
        }
        else{
            sum++;
        }
    }
    return sum;
}
int calb(int x,int y){
    int sum=0;
    for(int i=x;i<=8;i++){
        if(a[i][y]=='W'){
            return 0;
        }
        else{
            sum++;
        }
    }
return sum;
}
int main()
{
    int w_dif=100000;
    int b_dif=100000;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(a[i][j]=='W'){
                int fun=calw(i,j);
                if(fun!=0 && fun<=w_dif){
                    w_dif=fun;
                }
            }
            if(a[i][j]=='B'){
                int fun=calb(i,j);
                    if(fun!=0 && fun<=b_dif){
                        b_dif=fun;
                    }
            }
        }
    }
    if(w_dif<b_dif){
        cout<<"A";
    }
    else if(w_dif==b_dif){
        cout<<"A";
    }
    else{ cout<<"B";}
    return 0;
}