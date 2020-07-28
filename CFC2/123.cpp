#include <bits/stdc++.h>
 
#define int long long
 
using namespace std;
 
const int MX=2e5+9;
int a[MX];
map <int,int> mpl,mpr;
 
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mpr[a[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        mpr[a[i]]--;
        if(a[i]%k==0) ans+=mpl[a[i]/k]*mpr[a[i]*k];
        mpl[a[i]]++;
    }
    cout<<ans;
    return 0;
}
