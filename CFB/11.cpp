#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int h[n+1];int ans=0;
    for(int i=1;i<=n;++i)cin>>h[i];
    for(int i=1;i<=n;++i){
        int l=i-1,r=i+1;
        while(l>=1&&h[l]<=h[l+1]){
            l--;
        }
        while(r<=n&&h[r]<=h[r-1])r++;
        //cout<<l<<" "<<r<<endl;
        ans=max(ans,r-l-1);
    }
    cout<<ans<<endl;
}
