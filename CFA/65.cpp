#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int sum=0;
    vector<int> ar(n);
    for(int i=0;i<n;++i){cin>>ar[i];sum+=ar[i];}
    sort(ar.begin(),ar.end(),greater<int> ()) ;
    int i=0,ts=0;
    while(ts<=sum/2){
        ts+=ar[i++];
    }
    double d=3.1;
    cout<<trunc(d)<<endl;
}
