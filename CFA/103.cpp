#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    if(r-l<2||r<=3){cout<<"-1\n";return 0;}
    if(l%2)cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
    else cout<<l<<" "<<l+1<<" "<<l+2<<endl;
}
