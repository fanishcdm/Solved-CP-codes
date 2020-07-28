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
    int n,k;cin>>n>>k;
    vi a(n);int neg=0;
    fori(i,0,n){cin>>a[i];if(a[i]<0)neg++;}
    int i=0;
    while(i<n && k){
        if(a[i]>0)break;
        if(a[i]<0)a[i]*=-1,k--;i++;
    }
    sort(all(a));
    if(k>0){
        if(k%2!=0)a[0]*=-1;
    }
    ll sum=0;
    for(auto x:a)sum+=x;
    cout<<sum<<endl;
    return 0;
}

