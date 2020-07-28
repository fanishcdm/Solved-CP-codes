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
#define deb(a,b,c) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<endl;
typedef string str;
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

int main(){FIN;
    int n;cin>>n;
    vi a(n+1,-1);foreq(i,1,n)cin>>a[i];
    vi pre(n+1,0),suf(n+1,0);
    foreq(i,1,n)pre[i]=pre[i-1]+a[i];
    suf[n]=a[n];
    forrev(i,n-1,1)suf[i]=suf[i+1]+a[i];
    int x,y;cin>>x>>y; 
    foreq(i,1,n){
        int o=pre[i-1],t=suf[i];
        //deb(i,o,t);
        if(o>=x&&o<=y&&t>=x&&t<=y){
            cout<<i<<endl;return 0;
        }
    }
    cout<<0<<endl;
}

