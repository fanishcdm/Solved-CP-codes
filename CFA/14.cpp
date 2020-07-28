#include<bits/stdc++.h>
int main(){
    int a,b,aa,bb,ans=0;
    scanf("%d %d",&a,&b);
    aa=a;bb=b;
    while(aa<=bb){
        aa=3*aa;bb=2*bb;
        ans++;
    }
    printf("%d\n",ans);
    return 0;
}
