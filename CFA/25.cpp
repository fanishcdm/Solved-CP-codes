#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,d,ch=0;s=d=0;
    cin>>n;int a[n];
    for(int i=0;i<n;++i)scanf("%d",&a[i]);
    int i=0,j=n-1;
    while(i<=j){
        if(ch==0){
            if(a[i]<a[j])s+=a[j--];
            else s+=a[i++];
            ch=1;
        }
        else {
            if(a[i]<a[j])d+=a[j--];
            else d+=a[i++];
            ch=0;
        }
    }
    cout<<s<<" "<<d<<endl;
    return 0;

}
