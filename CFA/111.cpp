#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string a=s.substr(0,s.find('|')),b=s.substr(s.find('|')+1,s.length()-1);
    //cout<<a<<" "<<b<<endl;
    string w;cin>>w;
    //cout<<'a'+'c'<<'t'+'l';
    for(int i=0;w[i];++i){
        if(a.length()<b.length())a.push_back(w[i]);
        else b.push_back(w[i]);
    }
    if(a.length()==b.length())cout<<a<<"|"<<b;
    else cout<<"Impossible";
    cout<<endl;
}
