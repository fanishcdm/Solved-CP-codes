#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,ans;
    cin>>n>>k;
    if(n%2){
        if(k<=(n+1)/2)ans=2*k-1;
        else ans=2*k-(n+1);
    }
    else {
        if(k<=n/2)ans=2*k-1;
        else ans=2*k - n;
    }
    cout<<ans<<endl;
}
