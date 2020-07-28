#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int  main(){
    ll int n,x,il,d=0;
    scanf("%lld %lld ",&n,&x);
    il=x;
    while(n--){
        ll int f;char c;
        if(n!=0)scanf("%c %lld ",&c,&f);else scanf("%c %lld",&c,&f);
        if(c=='+')il+=f;
        else {
            if (il>=f) il-=f;
            else d++;
        }
        //cout<<il<<" "<<d<<endl;
    }
    cout<<il<<" "<<d<<endl;
}
