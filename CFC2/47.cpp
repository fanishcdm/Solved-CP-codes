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

ll powmod (ll n){

        if(n==0) return 1;
if(n==1) return 2;
ll r=powmod(n/2);
    r=(r*r)%mod;
if(n%2!=0) r= (r*2)%mod;
    return r;
}

int main(){FIN;
    string s;cin>>s;
    ll n= s.length();
    ll ans=0;
    for(ll i=0;s[i];++i){
        if(s[i]=='0')continue; 
        ans+=((powmod(i)*powmod(n-i-1))%mod*powmod(n-i-1))%mod;
        ans%=mod;
    }
    cout<<ans<<endl;
}

