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
    int n,m,a,b;cin>>n>>m>>a>>b;
    int r1=(a+m-1)/m,c1=a%m==0?m:a%m;
    int r2=(b+m-1)/m,c2=b%m==0?m:b%m;
   //cout<<c1<<" "<<c2<<endl; 
    int ans=-1;
    if(r1==r2)ans=1;
    else 
    if(c1==1){
        if(c2==m||b==n)ans=1;
        else ans=2;
    }
    else{
        if(c2==m||b==n||c2==c1-1||r2==r1+1)ans=2;
        else ans=3;
    }
    cout<<ans<<endl;
}

