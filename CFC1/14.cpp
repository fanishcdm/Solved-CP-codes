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
    int a,b;cin>>a>>b;
    ll ans=0,tp=0,bb=0;
    while(a%2==0)tp++,a/=2;while(b%2==0)bb++,b/=2;
    ans+=abs(tp-bb);tp=bb=0;
    while(a%3==0)tp++,a/=3;while(b%3==0)bb++,b/=3;
    ans+=abs(tp-bb);tp=bb=0;
    while(a%5==0)tp++,a/=5;while(b%5==0)bb++,b/=5;
    ans+=abs(tp-bb);tp=bb=0;
    //cout<<a<<b;
    if(a!=b)cout<<"-1\n";else cout<<ans<<endl;
}

