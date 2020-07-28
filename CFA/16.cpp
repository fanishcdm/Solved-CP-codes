#include<bits/stdc++.h>
int main(){
    int ii,jj;
    int a[6][6];
    for(int i=1;i<6;++i){
        for(int j=1;j<6;++j){
            scanf("%d",&a[i][j]);
            if(a[i][j]){ii=i;jj=j;}
        }
    }
    printf("%d\n",abs(ii-3)+abs(jj-3));
    return 0;
}
