#include<bits/stdc++.h>
using namespace std;
int main (){
    string s,d;
    cin>>s>>d;
    int ans=0;
    for(int i=0;i<(int)d.length();++i){
        if(d[i]==s[ans])ans++;
    }
    cout<<ans+1<<endl;
}
