#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    int curr=n;vector<int> aaya(n+1,0);
    for(int i=1;i<=n;++i){
        if(a[i]==curr){
            cout<<curr<<" ";
            curr--;
            while(aaya[curr]){
                cout<<curr<<" ";
                curr--;
            }
            cout<<endl;
        }
        else{
            cout<<endl;
            aaya[a[i]]++;
        }
    }

} 
