#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;cin>>n>>m>>k;
    int fa=1,d=0;
    vector<int > x(n+1,0);x[1]=1;
    int h[m+1];for(int i=1;i<=m;++i){cin>>h[i];x[h[i]]=-1;}
    while(k--){
        int i,j;cin>>i>>j;
        if(x[j]==-1&&!d){fa=j;d=1;x[i]=0;}
        else if(x[i]==-1&&!d){fa=i;d=1;x[j]=0;}
        else{
            int temp=x[i];x[i]=x[j];x[j]=temp;
        }
    }
    if(d)cout<<fa<<endl;else for(int i=1;i<=n;++i)if(x[i]==1)cout<<i<<endl;
}
