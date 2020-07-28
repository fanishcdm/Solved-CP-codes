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
    int n,m,k;cin>>n>>m>>k;
    vvi a(n+1,vi(m+1));
    foreq(i,1,n)foreq(j,1,m)cin>>a[i][j];
    vi r(1003,0),c(1003,0); 
    foreq(i,1,n)r[i]=i;
    foreq(i,1,m)c[i]=i;
    while(k--){
        char ch;int x,y;
        cin>>ch>>x>>y;
        if(ch=='c'){
            int temp=c[x];
            c[x]=c[y];
            c[y]=temp;
        }
        else if(ch=='r'){
            int temp=r[x];
            r[x]=r[y];
            r[y]=temp;
        }
        else {
            //cout<<r[x]<<" "<<c[y]<<endl;
           int fu=r[x],fk=c[y]; 
            printf("%lld\n",a[fu][fk]);
        }
    }
}

