#include<iostream>
using namespace std;
int main(){
 int n,x;
 int arr[100];
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>x;
  arr[x]=i+1;
 }
 for(int j=1;j<=n;j++){
  cout<<arr[j]<<" ";
 }
 
 
 
 
 return 0;
}