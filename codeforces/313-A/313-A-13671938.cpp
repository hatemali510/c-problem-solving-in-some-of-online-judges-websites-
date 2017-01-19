#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string num,temp,temp2;
    cin>>num;
    temp=num;
    temp2=num;
    int one,two,original;
   stringstream convert(num);
   convert >> original;
   if(original>=0){
    cout<<original;
    return 0;
   }
   else{
   int x=num.size();
   temp.erase(x-2,1);
   temp2.erase(x-1);
   stringstream convert2(temp);
   convert2>>one;
   stringstream convert3(temp2);
   convert3>>two;
   }
   if(two>one){
    cout<<two;
   }
   else{
    cout<<one;
   }
   return 0;


}