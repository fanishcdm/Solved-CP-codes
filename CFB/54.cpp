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
typedef vector<ll> vl;
typedef vector<vl> vvl;
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
    ll n;cin>>n;
    ll r1=-1,p2=5001,p1=-1;
    fori(i,0,n){ll x;cin>>x;r1=max(r1,x);}
    cin>>n;
    fori(i,0,n){ll x;cin>>x;p1=max(p1,x);}
    cin>>n;
    fori(i,0,n){ll x;cin>>x;p2=min(p2,x);}
    ll a,b;cin>>a>>b;
    double ans=p1*b;
    ans/=(p1*b+p2*a);
    ans=sqrt(ans);
    ans*=r1;
    cout<<setprecision(16)<<ans<<endl;
}

