#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,gro=0;
    cin>>n;
    int ar[n][2];
    for(i=0;i<n;++i){scanf("%d",&gro);ar[i][1]=gro%10;gro/=10;ar[i][0]=gro%10;}
    gro=1;
    for(i=0;i<n-1;++i){
        if(ar[i][1]==ar[i+1][0])gro++;
    }
    /*if(n==1)cout<<"1\n";else*/ cout<<gro<<endl;
    return 0;
}
