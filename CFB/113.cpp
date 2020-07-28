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
    int n;cin>>n;
    vi dp(n+1,-1),a(n+1);
    foreq(i,1,n)cin>>a[i];
    dp[1]=1;int mn=a[1],mx=mn;
    foreq(i,2,n){
        int tmn,tmx;
        if(a[i]<=mn)tmn=a[i];else tmn=mn;
        if(a[i]>=mx)tmx=a[i];else tmx=mx;
        if(tmx-tmn<=1)dp[i]=dp[i-1]+1,mn=tmn,mx=tmx;
        else dp[i]=dp[i-1];
    }
    foreq(i,1,n)cout<<dp[i]<<" ";cout<<endl;
    //cout<<dp[n]<<endl;
}

