#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    vector<int> ha(5,0);
    for(int i=0;i<(int)s.length();++i){
        ha[(int)s[i]-'1'+1]++;
    }
    //cout<<s;
    //for(int i=0;i<5;i++)printf("%d ",ha[i]);
    printf("%d\n",ha[1]*a+ha[2]*b+ha[3]*c+ha[4]*d);
    

}
