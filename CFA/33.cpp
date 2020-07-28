#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=max(a,b);
    ans=7-ans;
    int g=__gcd(ans,6);
    ans/=g;
    int six=6/g;
    cout<<ans<<"/"<<six<<endl;
}
