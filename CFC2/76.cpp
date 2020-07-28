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
    int n,m;cin>>n>>m;
    vi a(n+1,0);
    while(m--){
        int x,y,z;cin>>x>>y>>z;
        if(a[x]){
            if(a[x]==1)a[y]=2,a[z]=3;
            else if(a[x]==2)a[y]=1,a[z]=3;
            else a[y]=2,a[z]=1;
        }
        else if(a[y]){
            if(a[y]==1)a[x]=2,a[z]=3;
            else if(a[y]==2)a[x]=1,a[z]=3;
            else a[x]=2,a[z]=1;
        }
        else if(a[z]){
            if(a[z]==1)a[y]=2,a[x]=3;
            else if(a[z]==2)a[y]=1,a[x]=3;
            else a[y]=2,a[x]=1;
        }
        else a[x]=1,a[y]=2,a[z]=3;
    }
    foreq(i,1,n)cout<<a[i]<<" ";cout<<endl;
}

