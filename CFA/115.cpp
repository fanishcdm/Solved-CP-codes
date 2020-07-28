#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    set <int > s;
    for(int i=0;i<n;++i){int x;cin>>x;s.insert(x);}
    cout<<"s.size() "<<s.size()<<" n/2 "<<n/2<<endl;;
    if(s.size()>=n/2)cout<<"YES\n";
    else cout<<"NO\n";

}
