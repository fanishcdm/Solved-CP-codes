#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int x=0;
    for(int i=0;i<n;++i){
        string f;cin>>f;int op=-1;
        if(f[0]=='X'){if(f[1]=='+')op=1;}
        else if(f[0]=='+')op=1;
        x+=op;
    }
    cout<<x<<endl;
}
