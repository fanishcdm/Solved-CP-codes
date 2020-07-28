#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int > > a(n+1);
    for(int i=1;i<=n;++i){cin>>a[i].first;a[a[i].first].second=i;}
    int m;long long int ansl=0,ansr=0;
    cin>>m;
    for(int i=1;i<=m;++i){
        int x;cin>>x;
        ansl+=a[x].second;ansr+=(n+1)-a[x].second;
    }
    cout<<ansl<<" "<<ansr<<endl;
}
