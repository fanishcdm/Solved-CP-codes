#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;vector <char> v;
    cin>>s;
    for(int i=0;i<(int)s.length();++i)if(s[i]!='+')v.emplace_back((char)s[i]);
    sort(v.begin(),v.end());
    for(int i=0;i<(int)v.size();++i)if(i<(int)v.size()-1)cout<<v[i]<<"+";else cout<<v[i]<<endl;
}
