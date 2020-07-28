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
    int n,t1,t2;double k;cin>>n>>t1>>t2>>k;k/=100;
    vector<pair<double,int> > h(n); vector<double > s1(n+1),s2(n+1);
    foreq(i,1,n){
        double x,y;cin>>x>>y;
        if(x*(t1*k-t2)>=y*(t1*k-t2))s1[i]=x,s2[i]=y;
        else s1[i]=y,s2[i]=x;
    }
    foreq(i,1,n){
        h[i-1].se=i;
        h[i-1].fi=s1[i]*t1*k+s2[i]*t2;
    }
    sort(all(h));
    for(auto x:h){
        cout<<x.se<<" ";
        cout<<setprecision(2)<<x.fi<<endl;
    }
}

