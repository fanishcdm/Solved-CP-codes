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

ll check(ll i,ll j,ll n,ll m){
    return i>=0&&j>=0&&i<n&&j<m;
}

int main(){FIN;
    ll n,m,k,s=0;cin>>n>>m>>k;
    vvc mz (n,vc(m));
    queue<pii> q;
    vvi visi(n,vi(m,0));
    fori(i,0,n)fori(j,0,m){cin>>mz[i][j];if(mz[i][j]=='.'){if(q.empty())q.push({i,j}),visi[i][j]=1;s++;}}
    int tocover=s-k-1;
    while(!q.empty()&&tocover>0){
        pii temp=q.front();q.pop();
        ll i=temp.fi,j=temp.se;
        if(check(i+1,j,n,m)&&tocover)if(!visi[i+1][j]&&mz[i+1][j]=='.')q.push({i+1,j}),visi[i+1][j]=1,tocover--;
        if(check(i-1,j,n,m)&&tocover)if(!visi[i-1][j]&&mz[i-1][j]=='.')q.push({i-1,j}),visi[i-1][j]=1,tocover--;
        if(check(i,j+1,n,m)&&tocover)if(!visi[i][j+1]&&mz[i][j+1]=='.')q.push({i,j+1}),visi[i][j+1]=1,tocover--;
        if(check(i,j-1,n,m)&&tocover)if(!visi[i][j-1]&&mz[i][j-1]=='.')q.push({i,j-1}),visi[i][j-1]=1,tocover--;
    }
    fori(i,0,n){
        fori(j,0,m){
            if(mz[i][j]=='.'&&!visi[i][j])mz[i][j]='X';
        }
    }

    fori(i,0,n){fori(j,0,m)cout<<mz[i][j];cout<<endl;}
}

