#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 100000000007
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
    int idx,n,k;
    cin>>n>>k;
    vi a(n+1,-mod);vi pre(n+1);
    fori(i,0,n)cin>>a[i];
    sort(all(a));
    pre[0]=0;fori(i,1,n+1)pre[i]=pre[i-1]+a[i];
    pii ans={-1,-1};
    //fori(i,1,n+1)cout<<a[i]<<" ";cout<<endl;
    for(idx=1;idx<=n;++idx){
    int mid;int l=1,r=idx;
    while(l<r){
        mid= l + (r-l)/2;int j=mid;
        int f= ( j<n && (idx-j)*a[idx] - pre[idx-1]+pre[j-1] <=k  );
        //deb(idx,j,f);
        if(f)r=mid;
        else l=mid+1;
    }
        //deb(idx,l,ans.fi);
        int j=l;j=idx-j+1;
        if(ans.fi<j)ans={j,a[idx]};
    }
    cout<<ans.fi<<" "<<ans.se<<endl;
}

