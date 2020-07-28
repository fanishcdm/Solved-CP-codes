#include<bits/stdc++.h>
using namespace std;
long long summ(string s){long long int ans=0;
    for(int i=0;s[i];++i)ans+=s[i]-'0';
    return ans;
}
int main(){
    string s;
    cin>>s;
    string temp=s;
    int ans=0;
    while(temp.length()!=1){
        temp=to_string(summ(temp));ans++;
    }
    cout<<ans<<endl;

}
