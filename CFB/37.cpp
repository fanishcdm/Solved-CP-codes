#include<bits/stdc++.h>
using namespace std;
bool des(const pair<int ,int> &a,const pair<int ,int > &b){return a.first>b.first;}
int main(){
    int n,f;cin>>n>>f;
    vector<pair<int ,int > > v(n);
    for(int i=0;i<n;++i)cin>>v[i].second>>v[i].first;
    sort(v.begin(),v.end(),des);
    //for(int i=0;i<n;++i)cout<<v[i].second<<" "<<v[i].first<<endl;
    long long ans=0;
    for(int i=0;i<n;++i)if(v[i].second)ans+=min(v[i].first,v[i].second*(i<f?2:1));else f++;
    cout<<ans<<endl;
}
