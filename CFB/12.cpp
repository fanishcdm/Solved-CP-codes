#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;cin>>n>>a;
    int c[n+1];
    for(int i=1;i<=n;++i)cin>>c[i];
       int l,r,fa=0;
       if(a-1<n-a){l=1;r=a+a-1;}
       else {r=n;l=a-n+a;}
       //cout<<l<<" "<<r<<endl;
       int i=a-1,j=a+1;
       while(i>=l&&j<=r){
       int an=c[i]+c[j];
       if(an==2)fa+=2;
       i--;j++;
       }
       if(c[a])fa++;
       while(i>=1){if(c[i]==1)fa++;i--;}
       while(j<=n){if(c[j]==1)fa++;j++;}
       cout<<fa<<endl;
}
