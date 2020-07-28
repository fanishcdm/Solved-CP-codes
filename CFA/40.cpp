#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,f;
    getline(cin,s);
    for(int i=0;i<(int)s.length();++i){
        //char c=s[i]
        if(s[i]=='{'||s[i]=='}'||s[i]==','||s[i]==' ')continue;
        else f.push_back((char)s[i]);
    }
    unordered_set <char > ss;
    for(int i=0;i<(int)f.length();++i){
        ss.insert((char)f[i]);
    }
    cout<<ss.size()<<endl;
}
