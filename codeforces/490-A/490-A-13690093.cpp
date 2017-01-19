#include <bits/stdc++.h>

using namespace std;
int a[5000];
int main()
{
    string s="";
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        char c=a[i]+'0';
        s+=c;
    }
    vector<int> ans;
    while(s.size()){
        int f,se,th;
        f=s.find("1");
        se=s.find("2");
        th=s.find("3");
        if(f!=string::npos && se!=string::npos && th!=string::npos){
            ans.push_back(f+1);
            ans.push_back(se+1);
            ans.push_back(th+1);
            s[f]=s[se]=s[th]='0';
        }
        else{
           break;
        }
    }
    int line=0;
    if(ans.size()%3==0){
        cout<<ans.size()/3<<endl;
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
            line++;
            if(line==3){
                cout<<endl;
                line=0;
            }
    }
    }
    else{
        cout<<0;
    }
    return 0;
}