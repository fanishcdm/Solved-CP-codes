#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    cout<<abs(a[1]-a[2])<<" "<<abs(a[1]-a[n])<<endl;
    for(int i=2;i<=n-1;++i){
        int minn,maxx;
        minn=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
        maxx=max(abs(a[i]-a[n]),abs(a[i]-a[1]));
        cout<<minn<<" "<<maxx<<endl;
    }
    cout<<abs(a[n]-a[n-1])<<" "<<abs(a[1]-a[n])<<endl;
}
