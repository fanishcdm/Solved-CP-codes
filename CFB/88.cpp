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
    int n,m,co;cin>>n>>m;co=m;
    int ans=0;
    vector<vii> graph(101);
    while(m--){
        int a,b,c;cin>>a>>b>>c;
        graph[a].pb(mp(b,c));
        graph[b].pb(mp(a,c));
    }
    int t;cin>>t;
    while(t--){
        int u,v;cin>>u>>v;
        ans=0;
        for(int i=1;i<=co;++i){
            queue<int> q;q.push(u);vi visi(n+1,0);visi[u]=1;
            while(!q.empty()){
                int source=q.front();q.pop();
                if(source==v){ans++;break;}
                for(auto nb:graph[source]){
                        if(!visi[nb.fi]&&nb.se==i)q.push(nb.fi),visi[nb.fi]=1;
                }
            }
        }
        cout<<ans<<endl;
    }
}

