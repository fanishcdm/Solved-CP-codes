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
    int n,p;cin>>n>>p;
    vii lr(n+1);vector<float> e(n+1,0);vi pm(n+1,0);
    foreq(i,1,n)cin>>lr[i].fi>>lr[i].se;
    foreq(i,1,n)pm[i]=lr[i].se/p-(lr[i].fi-1)/p;
    foreq(i,1,n-1){
        float temp = ( (2000.0) * pm[i]  ) / (float)(lr[i].se-lr[i].fi+1); 
        e[i]+=temp;e[i+1]+=temp; 
    }
    float temp = ( (2000.0) * pm[n]  ) / (float)(lr[n].se-lr[n].fi+1); 
    e[n]+=temp;e[1]+=temp;
    double ans=accumulate(all(e),0.0);
    cout<<fixed<<setprecision(8)<<ans<<endl;
}

