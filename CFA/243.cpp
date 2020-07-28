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
    int n;cin>>n;
    vii a(n);fori(i,0,n)cin>>a[i].fi>>a[i].se;
    sort(all(a));int l=0,r=0;
    fori(i,0,n){
        int x=a[i].fi;
        if(x<0)l++;else r++;
    }
    int ans=0;
    if(l<=r){
        fori(i,0,2*l)ans+=a[i].se;if(l<r)ans+=a[2*l].se;
    }
    else{
        int i=n-1,c=1;
        while(c<=2*r+1&&i>=0){
            ans+=a[i--].se;c++;
        }
    }
    //deb(l,r,ans);
    cout<<ans<<endl;
}

