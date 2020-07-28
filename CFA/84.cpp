#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int i=0;
    vector<string > s(n);
    unordered_map <string,int> m;
    while(i<n){
        cin>>s[i];
        m[s[i]]++;
        i++;
    }
    pair<string,int> f,ss;int ii=0;
    for(auto j=m.begin();j!=m.end();++j){
       if(ii==0) f=make_pair(j->first,j->second);
       else ss=make_pair(j->first,j->second);
       ++ii;
    }
    if(f.second<ss.second)cout<<ss.first;
    else cout<<f.first;
    cout<<endl;
}
