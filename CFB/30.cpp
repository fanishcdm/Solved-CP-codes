#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    char p;
    cin>>n>>m>>p;
    vector<vector <char> > a(n,vector<char> (m));
    vector<int> desk(257,0);
    for(int i=0;i<n;++i)for(int j=0;j<m;++j)cin>>a[i][j];
    //cout<<p;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j]==p){
               if(i+1<=n-1&&i+1>=0)desk[a[i+1][j]]++;
               if(i-1<n&&i-1>=0)desk[a[i-1][j]]++;
               if(j+1>=0&&j+1<m)desk[a[i][j+1]]++;
               if(j-1>=0&&j-1<m)desk[a[i][j-1]]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i<257;++i)if(desk[i]&&i!='.'&&i!=(int)p){/*cout<<(char)i<<" "<<desk[i]<<endl;*/ans++;}
    cout<<ans<<endl;
}
