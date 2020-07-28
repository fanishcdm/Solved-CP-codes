#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    if(t==10){
        if(n==1)cout<<"-1\n";
        else {
            cout<<pow(10,n-1)<<endl;
        }
    }
    else {
        int ans=0;n--;
        while(n){
            ans+=pow(10,n--);
        }
        cout<<ans*t<<endl;
    }
    
}
