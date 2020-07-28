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
    ll n,p;cin>>n>>p;p--;
    string s;cin>>s;
   if(n==1){cout<<"0\n";return 0;} 
    if(p>=n/2){reverse(all(s));p=n-p-1;}
    ll ans=0,l=0,r=n/2-1;
while(l<p && s[l]==s[n-1-l])
    l++;
    while(r>p && s[r]==s[n-1-r])
    r--;
    fori(i,0,n/2){
        ll diff=s[i]-s[n-i-1];
        ans+=(min(abs(diff),abs(abs(diff)-26)));
    }
    ans+=min(abs(p+r-2*l),abs(2*r-p-l));
    cout<<ans<<endl;
}

