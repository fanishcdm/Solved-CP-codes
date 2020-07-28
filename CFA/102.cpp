#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector <int> v{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int i=find(v.begin(),v.end(),n)-find(v.begin(),v.end(),2);
    if(v[i+1]==m)cout<<"YES\n";
    else cout<<"NO\n";
}
