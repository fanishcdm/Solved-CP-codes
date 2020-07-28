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
    vi a(n);fori(i,0,n)cin>>a[i];
    string m;cin>>m;
    ll mv = 0;
    for(int i=0;m[i];++i)mv+=(m[i]-'0')*pow(2,i);
    int nearest = 1;
    //cout<<mv<<endl;
    while ((mv/(int)pow(2,nearest))>1) {
        nearest++;
        //cout<<nearest<<endl;
    }
    ll ans = 0;
    for(int i=pow(2,nearest)-1;i<=mv;++i){
        ll temp = 0;
        //if (n & (1 << (k - 1)))
        fori(j,0,n){
            temp+=a[j]*((i&(1<<j))?1:0);
        }
        //cout<<i<<" "<<temp<<endl;
        ans=max(ans,temp);
    }
    cout<<ans<<endl;
}

