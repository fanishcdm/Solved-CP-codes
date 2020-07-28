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

int main(){FIN;
    ll n;cin>>n;
    vi a(n),bi;
    fori(i,0,n)cin>>a[i];
    ll mi=*min_element(all(a));
    fori(i,0,n)if(a[i]==mi)bi.pb(i);
    ll mg=0;
    if(bi.size()>1){for(int i=0;i<bi.size()-1;++i)mg=max(mg,bi[i+1]-bi[i]-1);mg=max(mg,n+bi[0]-1-bi[bi.size()-1]);}
    else mg=n-1;
    mg+=n*mi; 
    cout<<mg<<endl;
}

