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
    int n,m;cin>>n>>m;
    vvi graph(n+1,vi());
    while(m--){int a,b;cin>>a>>b;graph[a].pb(b);graph[b].pb(a);}
    int ans=0;
    while(1){
        vii temp;
        for(int i=1;i<=n;++i){
            if(graph[i].size()==1){
                temp.pb({i,graph[i][0]});
            }
        }
        if(temp.size()==0)break;
        for(auto x : temp){
            graph[x.fi].clear();
            graph[x.se].erase(remove(all(graph[x.se]),x.fi),graph[x.se].end());
        }
        ans++;
    }
    cout<<ans<<endl;
}

