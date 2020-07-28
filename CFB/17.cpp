#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;cin>>n>>l;
    vector<float > v(n);
    for(int i=0;i<n;++i)cin>>v[i];
    float mad=0;sort(v.begin(),v.end());
    if(v[0])mad=v[]
    for(int i=0;i<n-1;++i)mad=max(mad,v[i+1]-v[i]);
    float ans=mad/2;
    cout<<ans<<endl;
    
}
