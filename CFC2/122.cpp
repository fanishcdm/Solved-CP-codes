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
ll p (ll a,ll x){
    if(x==0)return 1;
    ll ret = p(a,x/2);
    ret = (ret%mod * ret%mod)%mod;
    if(x&1)ret = (ret%mod*a%mod)%mod;
    return ret%mod;
}
int main(){FIN;
    int n;cin>>n;
    string s;cin>>s;
    vi freq (26,0);
    fori(i,0,n)freq[s[i]-'A']++;
    int mx=*max_element(all(freq)),nosm=0;
    for(auto x:freq)if(x==mx)nosm++;
    cout<<p(nosm,n)<<endl;
    
}

