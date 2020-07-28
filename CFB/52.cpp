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
int ncr (double n , double r){
    int ans=1,rf=1,nmrf=(int)n-(int)r,tp=nmrf;nmrf=1;
    for(int i=1;i<=n;++i)ans*=i;
    for(int i=1;i<=r;++i)rf*=i;
    for(int i=1;i<=tp;++i)nmrf*=i;
    ans/=(rf*nmrf);
    return ans;
}
int main(){FIN;
    string a,b;cin>>a>>b;
    int ta=0,tb=0,q=0;
    for(int i=0;a[i];++i){
        if(a[i]=='+')ta++;else ta--;
        if(b[i]=='+')tb++;else if(b[i]=='-')tb--;else q++;
    }
    int req=abs(ta-tb);
    if(req>a.length())cout<<0<<endl;
    else {
        if(q==0){
            if(req==0)cout<<1<<endl;
            else cout<<0<<endl;
            return 0;
        }
        req=(req+q)/2;
        double ans=ncr(q,req);
        ans/=(pow(2,q));
        cout<<setprecision(16)<<ans<<endl;
    }
}

