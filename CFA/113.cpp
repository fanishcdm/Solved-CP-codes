#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int ,int> > v(n);
    float curr=0;
    for(int i=0;i<n;++i){cin>>v[i].first>>v[i].second;curr+=v[i].second-v[i].first+1;}
    cout<<ceil(curr/k)*k-curr<<endl;

}
