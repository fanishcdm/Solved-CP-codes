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
    int n,m;cin>>n>>m;
    if(m==0){cout<<"0\n";return 0;}
    vi v(n+1,0),x;
    fori(i,0,n)cin>>v[i];
    foreq(i,1,m){
        int one,x2,y;
        cin>>one>>x2>>y;
        if(one==1)x.pb(x2);
    }
    m=x.size();
    if(m==0){cout<<"0\n";return 0;}
    int ans=1; 
    sort(all(v));
    sort(all(x));

    int vid = lower_bound(all(v),x[m-1]) - v.begin();
    if(vid==n+1)ans+=n;
    else if(v[vid]>x[m-1]){vid--;ans+=vid;} else ans+=vid;
    cout<<ans<<endl;
}

