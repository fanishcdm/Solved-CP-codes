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
    int n,mm,k;
    cin>>n>>mm>>k;map <int,int> m;
    vi a(n+1,0);foreq(i,1,n){cin>>a[i];m[a[i]]=i;}
    ll ans=0;
    while(mm--){
        int l;cin>>l;
        ans+=(m[l]/k+1);if(m[l]%k==0)ans--;
        if(m[l]==1)continue;
        swap(a[m[l]],a[m[l]-1]);
        swap(m[l],m[a[m[l]]]);
        //foreq(i,1,n)cout<<a[i]<<" ";cout<<endl;
        //cout<<m[l]<<" "<<ans<<endl<<endl;
    }
    cout<<ans<<endl;
}

