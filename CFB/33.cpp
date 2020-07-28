#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;++i)cin>>a[i];
    int c=0,li=1,ri=1;
    for(int i=1;i<=n-1;++i){
        if(a[i]>a[i+1]){
            if(c==0){c++;li=i;}
            else if(c==1){c++;ri=i;}
            else if(c==2){c++;}
            else {cout<<"no"<<endl;return 0;}
        }
    }
    cout<<li<<" "<<ri<<endl;
}
