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

int main(){FIN;
    int n,m;
    cin>>n>>m;
    string s,t;int ch=1;
    ll p,d,tp,td;p=d=tp=td=0;
    s.pb('0');
    t.pb('1');
    fori(i,1,n+m){
        if(ch){if(s[s.length()-1]=='0')s.pb('1'),t.pb('0');else s.pb('0'),t.pb('1');}
        else {if(s[s.length()-1]=='0')s.pb('0'),t.pb('1');else s.pb('1'),t.pb('0');}
        ch=!ch;
    }
    for(int i=0;i<s.length()-1;++i){
        if(s[i]==s[i+1])p++;else d++;
        if(t[i]==t[i+1])tp++;else td++;
    }
    if(tp>p)cout<<tp<<" "<<td<<endl;
    else cout<<p<<" "<<d<<endl;
}

