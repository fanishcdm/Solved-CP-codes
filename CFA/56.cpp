#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector <pair<int,int> >  a(n+1);
    for(int i=1;i<=n;++i){
       int x; cin>>x;a[i]={x,i};
    }
    sort(a.begin(),a.end());
    for(int i=1;i<=n;++i){
        cout<<a[i].second<<" ";
    }
    cout<<endl;
}
