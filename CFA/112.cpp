#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;string dir;
    cin>>dir;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    pair<char,int> st;int ans=INT_MAX;
    for(int i=0;i<n;++i){
        if(dir[i]=='R')st={'R',a[i]};
        else {
            if(st.first=='R')ans=min(ans,(a[i]+st.second)/2-st.second);
        }
    }
    if(ans==INT_MAX)cout<<"-1\n";
    else cout<<ans<<endl;

}
