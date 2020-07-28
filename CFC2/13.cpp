#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fori(a,b,c) for (ll(a) = (b);(a)<(c);++(a))
#define foreq(a,b,c) for (ll(a) = (b);(a)<=(c);++(a))
#define forrev(a,b,c) for (ll(a) = (b);(a)>=(c);--(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
typedef pair<ll, ll> pii;
typedef pair<ll,ll> pll;
typedef pair<string,string> pss;
typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vc> vvc;
typedef vector<pii> vii;
double PI = acos(-1); 
void yes()
{
    cout << "YES\n";
}
 
void no()
{
    cout << "NO\n";
}
 
void yesno(ll f)
{
    if (f)
        yes();
    else
        no();
}
vi common,ad,bd;
void getdiv(int a,vi & ad){
    int i=0; 
    for(i=1;i*i<a;++i){
        if(a%i==0){ad.pb(i);ad.pb(a/i);}
    }
    if(i*i==a)ad.pb(i);
}

void getcom(vi &a, vi &b){
    int n=a.size(),m=b.size();
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]==b[j])common.pb(a[i]),i++,j++;
        else if(a[i]>b[j])j++;
        else i++;
    }
}

int main(){FIN;
    int a,b;cin>>a>>b;
    getdiv(a,ad);
    getdiv(b,bd);
    sort(all(ad));sort(all(bd));
    getcom(ad,bd);
    int n;cin>>n;
    while(n--){
        int l,h;cin>>l>>h;
        int id = lower_bound(all(common),h)-common.begin();
        if(id==common.size())id--;if(common[id]>h)id--;
        //cout<<id<<" ";
        if(id<0||common[id]<l){cout<<"-1\n";continue;}
        cout<<common[id]<<endl;
    }
}

