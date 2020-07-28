#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    if((int)a[0]>='a')a[0]-='a'-'A';
    cout<<a<<endl;
    return 0;
}
