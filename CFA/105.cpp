#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int topp;cin>>topp;
    while(n--){
        vector<int> v(7,0);
        int l,r;
        cin>>l>>r;
        int bot=7-topp;
        v[l]=v[r]=v[7-l]=v[7-r]=1;
        int b=0,c=0;
        for(int i=1;i<7;++i)if(v[i]==0){
            if(b)c=v[i];
            else b=v[i];
        }
        if(bot==b||bot==c);
        else {cout<<"NO\n";return 0;}
        }
    cout<<"YES\n";
}
