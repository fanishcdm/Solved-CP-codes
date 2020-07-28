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
vvi graph;
vi visi;
int bfs(int root){
    int ret=0;
    visi[root]=1;
    queue<int> q;q.push(root);
    while(!q.empty()){
        int u=q.front();q.pop();ret++;
        for(auto x:graph[u]){
            if(!visi[x]){visi[x]=1;q.push(x);}
        }
    }
    return ret;
}
int main(){FIN;
    int n,m;cin>>n>>m;
    graph.assign(n+1,vi());
    visi.assign(n+1,0);
    ll ans=1;
    while(m--){
        int x,y;cin>>x>>y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    foreq(i,1,n){
        if(!visi[i])ans*=pow(2,bfs(i)-1);
    }
    cout<<ans<<endl;
}

