#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int x,y,z,sx=0,sy=0,sz=0;
    while(n--){
        cin>>x>>y>>z;sx+=x;sy+=y;sz+=z;
    }
    if(sx==0&&sy==0&&sz==0)cout<<"YES";else cout<<"NO";cout<<endl;
}
