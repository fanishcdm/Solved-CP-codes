#include<bits/stdc++.h>
using namespace std;
    vector< vector <char > > v(40005,vector<char > (40005,'.'));
int main(){
    int n,m,k,t;cin>>n>>m>>k>>t;
    while(k--){
        int x,y;cin>>x>>y;v[x][y]='w';
    }
    int de=0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(v[i][j]=='.'){
                v[i][j]='a'+de%3;de++;
            }
        }
    }
    while(t--){
        int x,y;cin>>x>>y;
        if(v[x][y]=='a')cout<<"Carrots";
        else if(v[x][y]=='b')cout<<"Kiwis";
        else if(v[x][y]=='c')cout<<"Grapes";
        else cout<<"Waste";
        cout<<endl;
    }
}
