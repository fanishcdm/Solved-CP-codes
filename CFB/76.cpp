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
    vi a(n+1);vi ind(100005,0);vector<set<int> > diff(100005);
    foreq(i,1,n){
        cin>>a[i];
        if(ind[a[i]]==0)ind[a[i]]=i;
        else diff[a[i]].insert(i-ind[a[i]]),ind[a[i]]=i;
    }
    vii ans;
    n=diff.size();
    fori(i,1,n){
        if(diff[i].size()==1)ans.pb(mp(i,*(diff[i].begin())));
    }
    n=a.size();
    fori(i,1,n){
        if(diff[a[i]].size()==0)ans.pb(mp(a[i],0));
    }
    sort(all(ans));
    n=ans.size();
    cout<<n<<endl;
    fori(i,0,n)cout<<ans[i].fi<<" "<<ans[i].se<<endl;
}

