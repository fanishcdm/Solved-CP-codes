#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;int a[n];
    for(int i=0;i<n;++i)scanf("%d",&a[i]);
    int p=0,c=0,ans=0;
    for(int i=0;i<n;++i){
        if(a[i]==-1){
            //c++;
            if(p==0)ans++;
            else p--;
        }
        else p+=a[i];
    }
    cout<<ans<<endl;
}
