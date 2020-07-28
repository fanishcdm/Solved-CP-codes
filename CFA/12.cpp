#include<bits/stdc++.h>
int main(){
    int n,a=0,d=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n;++i)if(s[i]=='A')a++;else d++;
    if(a>d)printf("Anton\n");
    else if(a==d)printf("Friendship\n");
    else printf("Danik\n");
    return 0;
}
