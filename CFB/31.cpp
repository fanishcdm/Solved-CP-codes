#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int n,k;cin>>n>>k;
    ll int h[n+1];
    for(ll int i=0;i<n;++i)cin>>h[i];
    ll int windsum=0;
    for(ll int i=0;i<k;++i)windsum+=h[i];
    ll int mini=0,minj=k-1,j=k;
    for(ll int i=1;j<n;++i,++j){
        ll int temp=windsum;
        windsum+=h[j]-h[i-1];
        if(windsum<temp){
            mini=i;
            minj=j;
        }
    }
    if(k>1)cout<<mini+1/*<<" "<<minj*/<<endl;
    else cout<<min_element(h,h+n)-h+1<<endl;

}
