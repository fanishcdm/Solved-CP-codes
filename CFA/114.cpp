#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v(4);
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            int hassh=0,dot=0;
            if(v[i][j]=='#')hassh++;
            else dot++;
            if(v[i+1][j]=='#')hassh++;
            else dot++;
            if(v[i][j+1]=='#')hassh++;
            else dot++;
            if(v[i+1][j+1]=='#')hassh++;
            else dot++;
            if(abs(hassh-dot)>=2){cout<<"YES\n";return 0;}
        }
    }
    cout<<"NO\n";
}
