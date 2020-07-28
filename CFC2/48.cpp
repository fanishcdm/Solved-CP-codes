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
    ll n,k;cin>>n>>k;
    vi a(n+1);foreq(i,1,n)cin>>a[i];
    ll l=1,r=1;ll ans=0,maxend=0;
    foreq(i,1,n){
        maxend+=a[i];
        if(maxend<0){
            maxend=0;
            l=i+1;
        }
        if(ans<maxend){
            ans=maxend;
            r=i;
        }
    }
    deb(l,r,ans);
    vi b;
    foreq(i,1,n){
        if(i>=l&&i<=r)continue;
        b.pb(a[i]);
    }
    sort(all(b));reverse(all(b));ll mxid=1;
    
    vi c;
    foreq(i,l,r)c.pb(a[i]);
    sort(all(c));ll mnid = 1;
    

    for(ll i=l;i<=r&&k;++i){
       ll mx = lower_bound(all(a),b[mxid++]) - a.begin() + 1;
       ll mn = lower_bound(all(a),c[mnid++]) - a.begin() + 1;
       deb(l,mx,mn);
       //if( (mx<=r && mx>=l) ){i--;continue;mxid++;}
       swap(a[mx],a[mn]);
       k--;
    }
    ans=0;
    foreq(i,l,r)ans+=a[i];
    cout<<ans<<endl;
}

