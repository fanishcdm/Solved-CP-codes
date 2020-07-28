#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;int h[n+1];
    for(int i=1;i<=n;++i)cin>>h[i];
    int ene=0,ans=0;
    h[0]=0;
    for(int i=0;i<n;++i){
        if(ene+h[i]-h[i+1]<0){
            int temp=h[i];
            h[i]=h[i+1]-ene;
            ans+=h[i]-temp;
        }
    //for(int i=0;i<n;++i)cout<<h[i]<<" ";cout<<endl;
        //cout<<ene<<" "<<ans<<endl;
        ene+=h[i]-h[i+1];

    }
    cout<<ans<<endl;
}
