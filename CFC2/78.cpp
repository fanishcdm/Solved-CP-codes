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

int main(){FIN;
    int na,ma,nb,mb;cin>>na>>ma;
    vvc a(na+1,vc(ma+1));
    foreq(i,1,na)foreq(j,1,ma)cin>>a[i][j];
    cin>>nb>>mb;
    vvc b(nb+1,vc(mb+1));
    foreq(i,1,nb)foreq(j,1,mb)cin>>b[i][j];
    int x=-50,y=-50,i=1,j=1,ans=0,xf=0,yf=0;
    while(x<=51){
        while(y<=51){
            int temp=0;
            for(i=1;i<=na;++i){
                for(j=1;j<=ma;++j){
                   if((i+x)<1||(i+x)>nb||(j+y)<1||(j+y)>mb)continue;
                   temp+=(a[i][j]-'0')*(b[i+x][j+y]-'0');
                }
            }
            if(temp>ans){ans=temp;xf=x;yf=y;}
            y++;
        }
        x++;
    }
    //deb(ans,x,y);
    cout<<xf<<" "<<yf<<endl;
}

