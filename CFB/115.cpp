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
    int n,m;cin>>n>>m;
    vvi b(n,vi(m));
    fori(i,0,n)fori(j,0,m)cin>>b[i][j];
    fori(i,0,n){
        fori(j,0,m){
            if(b[i][j]==1){
                int o=0,t=0;
                for(int k=0;k<m;++k){
                    if(k==j)continue;
                    if(b[i][k]==1){o=1;break;}
                }
                for(int k=0;k<n;++k){
                    if(k==i)continue;
                    if(b[k][j]==1){t=1;break;}
                }
                if(o==0&&t==0){no();return 0;}
            }
        }
    }
    vvi a(n,vi(m,1)),c(n,vi(m,0));
    fori(i,0,n){
        fori(j,0,m){
            if(b[i][j]==0){
                fori(k,0,m)a[i][k]=0;
                fori(k,0,n)a[k][j]=0;
            }
        }
    }
    if(a==c){no();return 0;}
    yes();
    fori(i,0,n){fori(j,0,m)cout<<a[i][j]<<" ";cout<<"\n";}

}

