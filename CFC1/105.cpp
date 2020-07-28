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
    int n,m,k;cin>>n>>m>>k;
    vii r(n+1,{0,0}),c(m+1,{0,0});
    fori(i,0,k){int x,rc,a;cin>>x>>rc>>a;if(x==1)r[rc].fi=a,r[rc].se=i;else c[rc].fi=a,c[rc].se=i;}
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(r[i].fi&&c[j].fi){if(r[i].se>c[j].se)cout<<r[i].fi;else cout<<c[j].fi;}
            else if(r[i].fi && !c[j].fi)cout<<r[i].fi;
            else if(c[j].fi && !r[i].fi)cout<<c[j].fi;
            else cout<<"0";
            cout<<" ";
        }
        cout<<endl;
    }

}

