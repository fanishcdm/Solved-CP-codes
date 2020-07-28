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

vvi tree;
vi visi,cur,req,lev;
vi ans;int ol,el;

void dfs(int node,int level){
    visi[node]=1;
    int flag=0;
    lev[node]=level;
    if(level%2==0){
        if(el%2==1)cur[node]^=1;
    }
    else{
        if(ol%2==1)cur[node]^=1;
    }
    if(cur[node]!=req[node]){
        if(level%2==1){
            ol++;
        }
        else el++;
        cur[node]^=1;
        ans.pb(node);
        flag=1;
    } 
    for(auto x:tree[node]){
        if(!visi[x]){
            dfs(x,level+1);
        }
    }
    if(flag){
        if(level%2==1){
            ol--;
        }
        else el--;
    }
}

int main(){FIN;
    int n;cin>>n;
    tree.assign(n+1,vi());
    visi.assign(n+1,0);
    cur.assign(n+1,0);
    req.assign(n+1,0);
    lev.assign(n+1,0);
    fori(i,0,n-1){
        int u,v;cin>>u>>v;
        tree[u].pb(v);
        tree[v].pb(u);
    }
    foreq(i,1,n)cin>>cur[i];
    foreq(i,1,n)cin>>req[i];
    dfs(1,1);
    cout<<ans.size()<<endl;for(auto x:ans)cout<<x<<endl;
}

