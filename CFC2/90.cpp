#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 100000000
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

int dp[101][101][2]; 
int n1,n2,k1,k2;

int cal(int i,int j,int st){
    if(dp[i][j][st]==-1){
        int ans=0;
        if(i==0)ans = j<=k2&&st==1 ; 
        if(j==0)ans = i<=k1&&st==0 ; 
        if(i==0 && j==0) ans=0;
        if(st){
            fori(l,1,min(k2,j)+1){
                ans = (ans + cal(i,j-l,0))%mod;
            }
        }
        else {
            fori(l,1,min(k1,i)+1){
                ans = (ans + cal(i-l,j,1))%mod;
            }
        }
        //deb(i,j,st);cout<<ans<<endl;
        dp[i][j][st]=ans%mod;
    }
    return dp[i][j][st]%mod;
}

int main(){FIN;
    cin>>n1>>n2>>k1>>k2;
    fori(i,0,n1+1)fori(j,0,n2+1)dp[i][j][0]=dp[i][j][1]=-1;
    cout << ( cal(n1,n2,0) + cal(n1,n2,1)  ) % mod <<endl;
}

