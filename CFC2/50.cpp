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

int mirror(vvi a , int j){
    foreq(i,0,j/2){
        if(a[i]!=a[j-i])return 0;
    }
    return 1;
}

int main(){FIN;
    int n,m;cin>>n>>m;
    vvi a(n,vi(m));
    fori(i,0,n)fori(j,0,m)cin>>a[i][j];
    if(n%2){cout<<n<<endl;return 0;}
    int j=n-1; 
    while(1){
        if((j+1)%2==0 && mirror(a,j)) {
            j/=2;
        }
        else break;
    }
    cout<<j+1<<endl;
}

