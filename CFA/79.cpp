#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    vector<pair<int,int> > v(n);
    for(i=0;i<n;++i)cin>>v[i].first>>v[i].second;
    for(i=0;i<n;++i)if(v[i].first!=v[i].second){
        cout<<"rated\n";return 0;
    }
    for(i=0;i<n-1;++i){
        if(v[i].first<v[i+1].first){
            cout<<"unrated\n";return 0;
        }
    }
    cout<<"maybe\n";
    return 0;
}
