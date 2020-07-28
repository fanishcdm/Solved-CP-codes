#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,f;cin>>s;int j=0;
    for(int i=0;s[i];){
        if(s.substr(i,3)=="WUB"){i+=3;if(i!=3)f.push_back(' ');}
        else {f.push_back(s[i]);++i;}
    }
    cout<<f<<endl;
}
