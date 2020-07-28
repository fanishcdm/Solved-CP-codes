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
    string s,ans;
    cin>>s;int n=s.length(),c=0,b=0;
    fori(i,0,n)if(s[i]=='2'){b=i;break;}
    fori(i,0,n)if(s[i]=='1'){c++;s.erase(s.begin()+i);}
    cout<<s<<endl;
    n=s.length();
    fori(i,0,b){
        ans.pb(s[i]);
    }
    fori(i,b,b+c)ans.pb('1');
    fori(i,b+c,n)ans.pb(s[i]);
    if(c==0)sort(all(ans));
    cout<<ans<<endl;
}

