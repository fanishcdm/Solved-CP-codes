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
    ll n,m,k;cin>>n>>m>>k;
    vi a(n+1);vvi o(m+1,vi (3));vi os(m+1,0);
    fori(i,1,n+1)cin>>a[i];
    fori(i,1,m+1)cin>>o[i][0]>>o[i][1]>>o[i][2];
    while(k--){
        ll x,y;cin>>x>>y;
        os[x]++;if(y<m)os[y+1]--;
    }
    fori(i,1,m+1)os[i]=os[i-1]+os[i];
    
    fori(i,1,m+1){
        o[i][2]*=os[i];
    }
    vi adda(n+1,0);
    fori(i,1,m+1){
        adda[o[i][0]]+=o[i][2];
        if(o[i][1]<n)adda[o[i][1]+1]-=o[i][2];
    }
    fori(i,1,n+1)adda[i]+=adda[i-1];
    fori(i,1,n+1)a[i]+=adda[i];
    fori(i,1,n+1)cout<<a[i]<<" ";cout<<endl;

}

