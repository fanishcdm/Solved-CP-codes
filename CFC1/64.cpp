#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fori(a,b,c) for (float(a) = (b);(a)<(c);++(a))
#define foreq(a,b,c) for (float(a) = (b);(a)<=(c);++(a))
#define forrev(a,b,c) for (float(a) = (b);(a)>=(c);--(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
typedef pair<float, float> pii;
typedef pair<ll,ll> pll;
typedef pair<string,string> pss;
typedef vector<float> vi;
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
 
void yesno(float f)
{
    if (f)
        yes();
    else
        no();
}

int main(){FIN;
    int n,k,t;cin>>n>>k>>t;
    int  i=1,x=0,brea=1;
    for(;i<=n&&brea;++i){
        x=0;
        for(;x<=k&&brea;++x){
            if((i*k+x)*100<=t*n*k&&t*n*k<(i*k+x+1)*100)brea=0;
        }
    }
    cout<<i<<" "<<x<<endl;
    if(brea){fori(j,0,n)cout<<"0 ";cout<<endl;return 0;}
    for(int j=1;j<=i-1;++j)cout<<k<<" ";cout<<x-1<<" ";
    for(int j=i+1;j<=n;++j)cout<<"0 ";cout<<endl;
}

