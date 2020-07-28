#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;int ans=0;
    cin>>s;char c='a';
    for(int i=0;i<(int)s.length();++i){
        ans+=min((-s[i]+c+26)%26,(s[i]-c+26)%26);
        c=s[i];
        //cout<<ans<<" ";
    }
    cout<<ans<<endl;
}
