#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        double n,m,a,d;
        cin>>n>>m>>a>>d;int x=a;
        int ans=m-n-floor(m/x)+ceil(n/x);
        x=a+d;
        ans+=m-n-floor(m/x)+ceil(n/x);
        x=a+2*d;
        ans+=m-n-floor(m/x)+ceil(n/x);
        x=a+3*d;
        ans+=m-n-floor(m/x)+ceil(n/x);
        x=a+4*d;
        ans+=m-n-floor(m/x)+ceil(n/x);
        cout<<ans<<endl;
    }
}
