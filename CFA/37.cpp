#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;++i){
        scanf("%d",&a[i]);
    }
    cin>>m;int x,y;
    for(int i=0;i<m;++i){
        cin>>x>>y;
        if(x>1)a[x-1]+=y-1;
        if(x<n)a[x+1]+=a[x]-y;a[x]=0;
    }
    for(int i=1;i<=n;++i){
        cout<<a[i]<<endl;
    }
}
