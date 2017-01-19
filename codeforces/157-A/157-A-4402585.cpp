#include<iostream>
using namespace std;
int main(){
    int n,count=0;
        cin>>n;
        int arr[n][n];
        int col[n],row[n];

        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                        cin>>arr[i][j];
                }
        }
        for(int i=0;i<n;i++){
                col[i]=0;
                row[i]=0;
        }
        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                        row[i]+=arr[i][j];
                        col[i]+=arr[j][i];
                }
        }
        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                        if(col[i]>row[j]){
                                count++;
                        }
                }
        }
        cout<<count;

        return 0;
}