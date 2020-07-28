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
    int n;cin>>n;
    map <int,int> xtoi; 
    vii x(n);fori(i,0,n)cin>>x[i].fi>>x[i].se;
    fori(i,0,n)xtoi[i]=x[i].fi;
    sort(all(x));
    vi ans(n,0);
    int m;cin>>m;
    foreq(i,1,m){
        int h,k;cin>>h>>k;
        auto it=lower_bound(all(x),h)-x.begin();
        //cout<<it<<endl; 
        int inside = (h-x[it].fi)*(h-x[it].fi)+k*k-x[it].se*x[it].se;
        if(inside<=0){if(ans[it]==0)ans[it]=i;}
        if(it>0){
            it--;
            int insideprev = (h-x[it].fi)*(h-x[it].fi)+k*k-x[it].se*x[it].se;
            if(insideprev<=0){if(ans[it]==0)ans[it]=i;}
        }
    }
    cout<<n-count(all(ans),0)<<endl;
    for(auto x:xtoi)}

