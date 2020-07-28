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
    ll n;cin>>n;set<int> s;
    vi a(n);fori(i,0,n){cin>>a[i];s.insert(a[i]);}
    n=s.size();
    int j=0;
    for(auto x:s){
        a[j++]=x;
    }
    sort(all(a));
    ll al=0;
    fori(i,1,n){
        if(a[i]!=a[0]*(i+1)){al=1;break;}
    }
    if(al==0){cout<<"Bob\n";return 0;}
    ll mx=a[n-1];
    ll g=a[0];
    fori(i,0,n)g=__gcd(g,a[i]);
    if((mx/g-n)%2==1)cout<<"Alice\n";
    else cout<<"Bob\n";
}

