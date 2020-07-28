#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int > a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int i=0,ans=n,j=n-1;
    while(a[i]==a[i+1]&&i<n-1){i++;
    }
    ans-=(i+1);
    while(a[j]==a[j-1]&&j>=1)j--;
    if(a[0]!=a[n-1])ans-=(n-j);
    if(n>1)cout<<ans<<endl;else cout<<"0\n";
}
