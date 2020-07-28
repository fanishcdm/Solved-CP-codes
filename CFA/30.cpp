#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,r,ans=1;
    cin>>k>>r;
    while(((k*ans)%10)!=r){
        if((k*ans)%10==0)break;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
