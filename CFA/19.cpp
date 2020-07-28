#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    vector<int > h(257,0);
    cin>>a;
    //unordered_map<string,int> um;
    for(int i=0;i<(int)a.length();++i){
        h[(int)a[i]]++;
    }
    int ans=0;
    for(int i=0;i<(int)h.size();++i)
    {
        if(h[i]>=1)ans++;
    }
    if(ans%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
