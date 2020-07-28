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
    int n;cin>>n;
    vi a(n);
    ll sum=0;
    fori(i,0,n)cin>>a[i],sum+=a[i];
    if(sum%3!=0){cout<<0<<endl;return 0;}
    sum/=3;
    int i=0,j=n-1,temp=0;
    //cout<<sum<<endl;
    while(i<n&&(temp=temp+a[i++])!=sum);i--;temp=0;
    while(j>=0&&(temp=temp+a[j--])!=sum);j++;temp=0;
    vi fi,fj;fi.pb(i);fj.pb(j);
    fori(k,i+1,j){
        temp+=a[k];
        if(temp==0){
            fi.pb(k);
        }
    }
    temp=0;
    forrev(k,j-1,i+1){
        temp+=a[k];
        if(temp==0)fj.pb(k);
    }
    ll ans=0;
    n=fi.size();int m=fj.size();
    i=0;j=m-1;
    while(i<n&&j>=0){
        if(fi[i]<fj[j]-1)ans+=j+1,i++;else j--;
    }
    //for(auto x:fi ) cout<<x<<" ";cout<<endl;  
    //for(auto x:fj ) cout<<x<<" ";cout<<endl;  
    cout<<ans<<endl;
}

