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
    int n,m;cin>>n>>m;
    int xi,yi;cin>>xi>>yi;
    ll ans=0;
    int k;cin>>k;
    while(k--){
        double d1,d2;cin>>d1>>d2;ll q,qq;
        if(d1>0) q=max((int)floor((n-xi)/d1),0);else if(d1<0) q=max((int)floor((1-xi)/d1),0) ;else q=INT_MAX;
        if(d2>0) qq=max((int)floor((m-yi)/d2),0); else if(d2<0)qq= max((int)floor((1-yi)/d2),0);else qq=INT_MAX;
        ll temp=min(q,qq);
        if(temp==0)continue;
        xi=xi+temp*d1;yi=yi+temp*d2;
        //cout<<xi<<" "<<yi<<endl;
        ans+=temp;
    }
    cout<<ans<<endl;
}

