#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char> d,nd;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)for(int j=0;j<n;++j){
        char x;cin>>x;
        if(i==j)d.insert(x);
        else nd.insert(x);
    }
    if(d.size()==1&&nd.size()==1){
        for(auto dd=d.begin(),ndd=nd.begin();dd!=d.end();++dd,++ndd){
            /*if (*dd!=*ndd)cout<<"YES\n";
            else cout<<"NO\n";*/
            cout<<*dd<<" ";
        }
    }
}
