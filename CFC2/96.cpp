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
#define deb(a,b,c) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<endl;
typedef string str;
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
int n,p;
int pal(string s){
    int i=0,j=n-1;
    while(i<=j){
        if(s[i++]!=s[j--])return 0;
    }
    return 1;
}
int main(){FIN;
    cin>>n>>p;
    string s;cin>>s;
    for(int i=n-1;i>=0;--i){
        for(char c=s[i]-'a'+2;c<=p;++c){
            string t=s;
            t[i]=c+'a'-1;
            if(!pal(t)){
                cout<<t<<endl;
                return 0;
            }
        }
    }
    no();
}

