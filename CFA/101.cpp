#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string x;int ans=0;
    while(n--){
        cin>>x;
        if(x[0]=='T')ans+=4;
        else if(x[0]=='C')ans+=6;
        else if(x[0]=='O')ans+=8;
        else if(x[0]=='D')ans+=12;
        else ans+=20;
    }
    cout<<ans<<endl;
}
