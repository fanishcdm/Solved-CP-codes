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
    string s;cin>>s;
    vi freq(26,0);
    fori(i,0,n)freq[s[i]-'A']++;
    ll ans=0;
    while(k>0){
        ll idx = max_element(all(freq)) - freq.begin();
        ans+= min(freq[idx],k)*min(k,freq[idx]);
        k-=freq[idx];freq[idx]=0;
        //deb(idx,ans,k);
    }
    cout<<ans<<endl;
}
