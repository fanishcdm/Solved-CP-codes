#include<bits/stdc++.h>
using namespace std;
int colorg[101],colorh[101];
int main(){
    int n;cin>>n;
    int h[n+1],g[n+1];
    for(int i=1;i<=n;++i){
        scanf("%d %d",&h[i],&g[i]);
        colorh[h[i]]+=1;
        colorg[g[i]]+=1;
    }
    int ans=0;
    /*for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(i==j)continue;
            if(h[i]==g[j])ans++;
        }
    }*/
    for(int i=1;i<=n;++i){
        //cout<<colorh[i]<<" "<<colorg[i];
        //cout<<h[i]<<" "<<g[i]<<" ";
        ans+=colorh[i]*colorg[i];
    }
    cout<<"\n"<<ans<<endl;
}
