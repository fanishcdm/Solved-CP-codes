#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
cin>>a>>b; 
    //cout<<a<<" "<<b;
    //cout<<a.compare(b);
for(auto i=0;i<(int)a.length();++i){
    if(a[i]<='Z')a[i]+='a'-'A';
    if(b[i]<='Z')b[i]+='a'-'A';

}
int ab=a.compare(b);
if(ab<0)printf("-1\n") ;
else if(ab==0)printf("0\n");
else printf("1\n");

//cout<<a<<" "<<b;
    return 0;
}
