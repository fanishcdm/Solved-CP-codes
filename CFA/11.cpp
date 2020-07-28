#include<bits/stdc++.h>

int main(){
    int n,h;
    int ans=0;
    scanf("%d %d",&n,&h);
    int a[n+1];
    for(int i=1;i<=n;++i){scanf("%d",&a[i]);if(a[i]>h)ans+=2;else ans++;}
    printf("%d\n",ans);
    return 0;
}
