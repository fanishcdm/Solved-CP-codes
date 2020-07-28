#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;int n;cin>>n>>s;
    deque<char> f;
    if(n%2==0){
        for(int i=0;i<n;++i){
            if(i%2!=0)f.push_back(s[i]);
            else f.push_front(s[i]);
        }
    }
    else{
        for(int i=0;i<n;++i){
            if(i%2!=0)f.push_front(s[i]);
            else f.push_back(s[i]);
        }
    }
    for(auto i=f.begin();i!=f.end();++i)cout<<*i;
    cout<<endl;
}
