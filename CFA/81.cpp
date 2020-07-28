#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a;
    cin>>s;
    for(int i=0;s[i];++i){
        if(s[i]<='Z')s[i]+='a'-'A';
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')continue;
        else a.push_back(s[i]);
    }
    string ans;
    int i=0;
    while(a[i]){
        ans.push_back('.');
        ans.push_back(a[i]);
        ++i;
    }
    cout<<ans<<endl;
}
