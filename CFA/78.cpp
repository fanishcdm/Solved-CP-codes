#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q;
    cin>>n;
    cin>>p;
    set<int > s;
    while(p--){
        cin>>q;s.insert(q);
    }
    cin>>q;
    while(q--){
        cin>>p;s.insert(p);
    }
    if(s.size()==n)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    cout<<endl;
}
