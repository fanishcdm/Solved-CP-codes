#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<pair<int ,int> > v(m);
    for(int i=0;i<m;++i)cin>>v[i].second>>v[i].first;
    sort(v.begin(),v.end());
    int req=0,ans=0;
    //for(int i=0;i<m;++i)cout<<v[i].second<<" "<<v[i].first<<endl;
    for(int i=m-1;i>=0&&req<=n;--i){
    //    cout<<i<<endl;
        ans+=min(v[i].second,n-req)*v[i].first;
        req+=v[i].second;
    //cout<<ans<<" "<<req<<endl;
    }
    cout<<ans<<endl;
}
