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
    string s;cin>>s;
    int a,b;cin>>a>>b;
    int n=s.length();
    vi pre(n,0),suf(n,0),tenrem(n,0);
    tenrem[0]=0;tenrem[1]=10%b;
    fori(i,2,n){
        tenrem[i] = (tenrem[i-1]*(10%b))%b;
    }
    pre[0]=(s[0]-'0')%a;suf[n-1]=(s[n-1]-'0')%b;
    fori(i,1,n){
        int a1=pre[i-1],no=s[i]-'0';
        pre[i] = ( (a1*(10%a))%a + no%a )%a;
    }
    forrev(i,n-2,0){
       int r1 = suf[i+1]%b,r2 = (s[i]-'0')%b;
       suf[i] = ((r2 * (tenrem[n-1-i])) + r1 )%b;
    }
    int ans=-1;
    fori(i,0,n-1){
       if(pre[i]==0 && suf[i+1]==0 && s[i+1]!='0'){
           ans=i;break;
       }
    }
    if(ans==-1)no();
    else {
        yes();
        fori(i,0,ans+1)cout<<s[i];int i=0;
        for( i=ans+1;i<n;++i){if(s[i]=='0'){cout<<s[i];}else break;}cout<<"\n";
        fori(j,i,n)cout<<s[j];cout<<endl;
    }
}

