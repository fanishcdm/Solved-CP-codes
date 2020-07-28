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
    vi prime(n+1,1);
    prime[1]=0;
    for(int i=4;i<=n;i+=2)prime[i]=0;
    for(int i=3;i*i<=n;i+=2){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=0;
        }
    }
    //for (auto x:prime)cout<<x<<" ";cout<<endl;
    vi ans;
    for(int i=2;i<=n;++i){
        if(prime[i]){
            int q=1;
            while(1){
                q*=i;
                if(q>n)break;
                ans.pb(q);
            }
        }
    }
 cout<<ans.size()<<endl;   for(auto x:ans)cout<<x<<" ";cout<<endl;
}

