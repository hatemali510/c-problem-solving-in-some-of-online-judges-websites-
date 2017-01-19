#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string a;
    cin>>a;
    char c;
    int h=0;
    vector<char> ch;
    for(int i=0;i<a.size();i++){
        c=a[i];
    if(isupper(c)){
        a[i]=tolower(c);
    }
        ch.push_back(a[i]);
    }
    for(int i=0;i<ch.size();i++){
        if(ch[i]=='a' || ch[i]=='A' ||ch[i]=='o'||ch[i]=='O' ||ch[i]=='Y' ||ch[i]=='y' || ch[i]=='E' || ch[i]=='e' ||ch[i]=='U' || ch[i]=='u'|| ch[i]=='I' || ch[i]=='i'){
           ch.erase(ch.begin()+i);
           i--;
                }
    }
    for(int i=0;i<ch.size();i++){
        cout<<".";
        cout<<ch[i];
    }
    return 0;
}