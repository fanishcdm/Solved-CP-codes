#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;int u,l;u=l=0;
    cin>>a;
    for(int i=0;i<(int)a.size();++i){
        if((int)a[i]<='Z')u++;
        else l++;
    }
    if(u<=l){
        for(int i=0;i<(int)a.size();++i){
            if((int)a[i]<='Z')a[i]+='a'-'A';
        }
    }
    else {
        for(int i=0;i<(int)a.length();++i){
            if((int)a[i]>='a')a[i]-='a'-'A';
        }
    }
    cout<<a<<endl;
    return 0;
}

