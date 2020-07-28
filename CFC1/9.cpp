#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fori(a,b,c) for (int(a) = (b);(a)<(c);++(a))
#define foreq(a,b,c) for (int(a) = (b);(a)<=(c);++(a))
#define forrev(a,b,c) for (int(a) = (b);(a)>=(c);--(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
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
 
void yesno(int f)
{
    if (f)
        yes();
    else
        no();
}

int main(){FIN;
    int n;cin>>n;
    vii a(n);fori(i,0,n)cin>>a[i].fi>>a[i].se;
    ll x=0,y=0,xy=0;
    sort(all(a));
    int curx=a[0].fi,cury=a[0].se;
    fori(i,0,n){
        if(a[i].fi==curx)x++;else curx=a[i].fi;
        if(a[i].se==cury)y++;else cury=a[i].se;
        if(a[i].fi==curx&&a[i].se==cury)xy++;
    }
    ll ans=(x*(x+1))/2+(y*(y+1))/2-xy;
    cout<<ans<<endl;
}

