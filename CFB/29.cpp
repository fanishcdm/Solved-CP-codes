#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll int n;cin>>n;
    ll int c[n+1],pre1[n+1],pre2[n+1];pre1[0]=pre2[0]=c[0]=0;
    for(ll int i=1;i<=n;++i){
        cin>>c[i];pre1[i]=pre1[i-1]+c[i];
    }
    sort(c,c+n+1);
    for(ll int i=1;i<=n;++i){
    //    cout<<c[i]<<" ";
        pre2[i]=pre2[i-1]+c[i];
    }
    ll int m;cin>>m;
    while(m--){
        ll int l,r,x;
        cin>>x>>l>>r;
        if(x==1)cout<<pre1[r]-pre1[l-1];
        else cout<<pre2[r]-pre2[l-1];
        cout<<endl;
    }
    
}
