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
    int t;cin>>t;
    while(t--){
        int n,p;cin>>n>>p;
        vvi graph(n+1,vi());
        foreq(i,1,n){
            graph[i].pb((i+1)%n==0?n:(i+1)%n);           
            graph[i].pb((i+2)%n==0?n-1:(i+2)%n);           
            //graph[(i+2)%n==0?n-1:(i+1)%n].pb(i);           
            //graph[(i+1)%n==0?n:(i+1)%n].pb(i);           
        }
        foreq(i,1,p){
            graph[i].pb((i+3)%n==0?n-2:(i+3)%n);
            //graph[(i+3)%n==0?n-2:(i+3)%n].pb(i);           
        }
        foreq(i,1,n){
            for(auto x: graph[i]){
                cout<<i<<" "<<x<<endl;
            }
        }
    }
}

