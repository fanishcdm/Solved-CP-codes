#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int> h(2*n+2);
    for(int i=1;i<2*n+2;++i)cin>>h[i];
    for(int i=1;i<2*n+1&&k;++i){
        if(i%2==0){
            if(h[i]-1>h[i-1]&&h[i]-1>h[i+1]){
                h[i]--;
                k--;
            }
        }
    }
    for(int i=1;i<2*n+2;++i)cout<<h[i]<<" ";cout<<endl;

}
