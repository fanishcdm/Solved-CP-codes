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
    string s;cin>>s;int n=s.length();
    vi f(26,0);int mx=0;char c;
    for(int i=0;s[i];++i){
        f[s[i]-'a']++;
        if(f[s[i]-'a']>mx){mx=f[s[i]-'a'];c=s[i];}
    }
    vi prime(1000,1);prime[1]=prime[0]=0;
    for(int i=2;i*i<=1000;++i)
        if(prime[i])
            for(int j=i*i;j<=1000;j+=i)
                prime[j]=0;
        string rest,ret;
        for(int i=0;i<n;++i){
            if(s[i]!=c)rest.pb(s[i]); 
        }
    int req=0,j=0;
    for(int i=2;i<=n;++i){
       if(((i*2<=n)||(!prime[i]))) req++;
    }
    //deb(c,mx,req);
    if(mx>=req){
        yes();
        ret.pb(rest[j++]);
    for(int i=2;i<=n;++i){
       if(((i*2<=n)||(!prime[i]))) ret.pb(c);
       else ret.pb(rest[j++]);
    }
    deb(req,rest,ret); 
    //cout<<rest<<endl; 
    }
    else no();
}

