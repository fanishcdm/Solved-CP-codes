#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    for(int i=0;s[i];++i){
        if(s[i]-'0'>=5){if(i>0)s[i]=9+'0'-s[i]+'0';else {if(s[i]!=9+'0')s[i]=9+'0'-s[i]+'0';}}
    }
    cout<<s<<endl;
}
