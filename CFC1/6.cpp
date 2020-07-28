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
    int n,s;cin>>n>>s;
    vi a(n+1,0);fori(i,1,n+1)cin>>a[i];
    int l=1,r=n,ans=0;
    while(l<r){
        vi bp=a;
        int mid=(l+r)/2;
        fori(i,1,n+1)bp[i]+=i*mid;
        sort(all(bp));
        ll sum=accumulate(bp.begin()+1,bp.begin()+mid+1,0);
        if(sum<s)l=mid+1;
        else if(sum>s)r=mid-1;
        else {ans=mid;break;}
    }
    cout<<l<<" "<<r<<" "<<ans<<endl;
}

