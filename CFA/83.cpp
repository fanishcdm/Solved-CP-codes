#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string a;cin>>n>>a;
    vector <char> s;
    for(int i=0;a[i];++i){
        //cout<< (s.back());
        if(s.empty()==true || a[i]==s.back()) s.push_back(a[i]);
        else 
        s.pop_back();
    }
    cout<<s.size()<<endl;
}
