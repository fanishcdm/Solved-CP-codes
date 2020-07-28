#include<bits/stdc++.h>
using namespace std;
string add(string a,string b){
    string res;
    reverse(a.begin(),a.end());reverse(b.begin(),b.end());
    if(a.size()<b.size()){
        while(a.size()!=b.size()){
            a.push_back('0');
        }
    }
    else if(b.size()<a.size()){
        while(b.size()!=a.size()){
            b.push_back('0');
        }
    }
    int carry=0;
    for(int i=0;i<(int)a.size();++i){
        int temp=a[i]-'1'+2+b[i]-'1'+carry;
        //cout<<temp<<endl;
        if(i!=(int)a.size()-1){res.push_back(temp%10+'0');
            //cout<<res<<endl; 
            carry=temp/10;
        }
        else{
            string x=to_string(temp);
            reverse(x.begin(),x.end());
            res+=x;
        }
    }
    reverse(res.begin(),res.end());
    return res;
}

int main (){
    string a,b,ans;
    cin>>a>>b;
    //ans=to_string(125);reverse(ans.begin(),ans.end());cout<<ans;
    //ans=add(a,b);cout<<ans;
    if(a.size()<b.size())swap(a,b);
    reverse(a.begin(),a.end());reverse(b.begin(),b.end());
    for(int i=0;i<(int)b.size();++i){
        int curr=b[i]-'0',carry=0;string temp;
        for(int j=0;j<(int)a.size();++j){
            int ta=curr*(a[j]-'0')+carry;
            if(j!=(int)a.size()-1){
            temp.push_back(ta%10+'0');carry=ta/10;
            }
            else {
            string w=to_string(ta);
            reverse(w.begin(),w.end());
            temp+=w;
            }
            reverse(temp.begin(),temp.end());
            for(int k=0;k<i;++k)temp.push_back('0');
            ans=add(temp,ans);
        }cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
