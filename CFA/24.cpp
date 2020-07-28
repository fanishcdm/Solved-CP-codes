#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;string s;
    cin>>n>>s;
    for(int i=0;i<(int)s.length()-1;++i){
        if(s[i]==s[i+1])ans++;
    }
    cout<<ans<<endl;
    return 0;
}
