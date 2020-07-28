#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;int flag=1,ans=0;
    for(int i=0;i<n;++i){
        flag=1;
        string x;
        cin>>x;
        for(int j=0;x[j];++j){
            if(x[j]-'0'>k)flag=0;
        }
        if(flag)ans++;
    }
    cout<<ans<<endl;
}
