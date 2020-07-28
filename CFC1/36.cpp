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
    vi a(n+1),b(n+1);
    fori(i,1,n+1)cin>>a[i]>>b[i];
    vc af(n+1,'0'),bf(n+1,'0');
    int ia=1,ib=1;
    fori(i,0,n){
        if(a[ia]<b[ib]){
            af[ia]='1';
            ia++;
        }
        else {
            bf[ib]='1';
            ib++;
        }
    }
    fori(i,1,n/2+1){
        af[i]='1';
        bf[i]='1';
    }
    foreq(i,1,n)cout<<af[i];cout<<endl;
    foreq(i,1,n)cout<<bf[i];cout<<endl;
}

