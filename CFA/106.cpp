#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;cin>>x>>y;
    long long int ans=0;
    for(int i=1;i<=x;++i){
        int a=((i/5)+1)*5-i;
        int n=(y+5-a)/5;
        //cout<<a<<" "<<n<<endl;
        ans+=n;
    }
    cout<<ans<<endl;
}
