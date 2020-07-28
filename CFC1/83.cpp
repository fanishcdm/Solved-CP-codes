#define MAX 100005
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
vi prime(MAX,1);
prime[0]=prime[1]=0;
for(int i=2;i*i<=MAX;++i){
    if(prime[i])
    for(int j=i*i;j<=MAX;j+=i)prime[j]=0;
}
vi toadd(MAX,0),pn;
int cur=0;
fori(i,0,MAX){
   if(prime[i])pn.pb(i); 
}
fori(i,0,MAX){
    toadd[i]=pn[cur]-i;
    if(i==pn[cur])cur++;
}
//fori(i,0,10)cout<<toadd[i]<<" ";cout<<endl;
vvi pm(n,vi (m));
fori(i,0,n)fori(j,0,m)cin>>pm[i][j];
ll ans=INT_MAX;
fori(i,0,n){
    ll temp=0;
    fori(j,0,m){
        temp+=toadd[pm[i][j]];
    }
    //cout<<temp<<endl;
    ans=min(ans,temp);
}
fori(j,0,m){
    ll temp=0;
    fori(i,0,n){
        temp+=toadd[pm[i][j]];
    }
    ans=min(ans,temp);
}
cout<<ans<<endl;
}

