#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    char ar[]={'V','I','B','G','Y','O','R'};
    for(int i=0;i<7;++i){
        cout<<ar[i%7];
    }
    for(int i=1;i<=n-7;++i){
        cout<<ar[i%7];
    }
    cout<<endl;
}
