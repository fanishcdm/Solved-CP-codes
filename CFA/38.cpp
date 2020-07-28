#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
   ll int n,b,d,curr,ans=0,cs=0;
    cin>>n>>b>>d;
    vector<ll int> ar(n+1);
    for(ll int i=1;i<=n;++i){
        scanf("%lld",&curr);
        if(curr<=b){
            if(cs<=d)
            cs+=curr;
            else {
                ans++;
                cs=0;
            }
        }
    }
    if(cs>d)ans++;
    cout<<ans<<endl;
}
