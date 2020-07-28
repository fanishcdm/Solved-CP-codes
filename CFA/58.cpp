#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
   // cin>>a>>b;
    getline(cin,a);
    getline(cin,b);
    if(a.compare(b)==0)cout<<"-1\n";
    else cout<<max(a.length(),b.length())<<"\n";
}
