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
vvc trans(vvc a,int n, int m,int cn){
    vvc temp(n,vc(m-1));
    fori(i,0,n){
        fori(j,0,m){
            if(j==cn)continue;
            temp[i][j]=a[i][j];
        }
    }
    return temp;
}
int main(){FIN;
    int n,m;cin>>n>>m;
    vvc a(n,vc(m));
    int ans=0; 
    fori(i,0,n)fori(j,0,m)cin>>a[i][j];
    for(int j=0;j<m;++j){
        fori(i,0,n-1){
            if(a[i][j]>a[i+1][j]){
                ans++;
                cout<<j<<endl;
                break;
            }
        }
    }   
    cout<<ans<<endl;
    
}

