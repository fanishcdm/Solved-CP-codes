#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    long long a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a,a+n);
    //for(int i=0;i<n;++i)cout<<a[i]<<" ";
    long long ans=0;
    for(int i=0;i<n;++i){
        ans+=a[i]*x;
        if(x>1)x--;
    }
    cout<<ans<<endl;
}
