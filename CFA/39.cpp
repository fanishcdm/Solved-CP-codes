#include<bits/stdc++.h>
using namespace std;
int main(){
    int nn,n,t,d,k,ans1=0,ans2=0,ans11=0,ans12=0;
    cin>>n>>t>>k>>d;
    ans1=0;ans2=nn=n;
    while(n>0){
        n-=k;
        ans1+=t;
    }
    n=ans2;ans2=0;
    while(n>0){
        if(ans2<d){
            n-=k;ans2+=t;
        }
        else{
            nn=n;
            while(n>0){
                n-=k;
                ans11+=t;
            }
            while(nn>0){
                nn-=k;
                ans12+=t;
            }
            ans2=d+min(ans11,ans12);
        }
    }

    /*ans1=ceil((n*t)/k);
      ans2=floor((d*k)/t)+floor(((ans1-d)*k)/t);
      */
    cout<<ans1<<" "<<ans2<<endl;
    if(ans1<=ans2)cout<<"NO";
    else cout<<"YES";
    cout<<endl;

}
