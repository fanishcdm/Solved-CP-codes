#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;char x;
    vector<int> v(257,0);
    for(int i=0;i<n;++i)for(int j=0;j<m;++j){
        cin>>x;v[x]++;
    }
    if(v['C']||v['M']||v['Y'])cout<<"#Color\n";
    else cout<<"#Black&White\n";
     
}
