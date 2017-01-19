#include <bits/stdc++.h>

using namespace std;
bool  prime[1000000];
void sieve(int N) {
 memset(prime, -1, N * sizeof(prime[0]));
 prime[0] = prime[1] = false;
 int sqrtN = (int) sqrt((double) N);
 for (int i = 2; i <= sqrtN; i++)
 if (prime[i])
for (int j = i * i; j < N; j += i)
prime[j] = false;
}
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    sieve(1000000);
    for(int i=0;i<n;i++){
        long long int x;cin>>x;
        double ans=sqrt(x);
        if(ans-(int)ans==0){
           if(prime[(int)ans]){
            cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}