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
    string s;cin>>s;int n=s.length();
    vi x(n+1,0),y(n+1,0),z(n+1,0);
    for(int i=0;s[i];++i){
        if(s[i]=='x')x[i+1]=1;
        else if(s[i]=='y')y[i+1]=1;
        else z[i+1]=1;
        x[i+1]+=x[i];
        y[i+1]+=y[i];
        z[i+1]+=z[i];
    }
    int m;cin>>m;
    while(m--){
        int l,r;cin>>l>>r;
        int xx=x[r]-x[l-1];
        int yy=y[r]-y[l-1];
        int zz=z[r]-z[l-1];
        int nn=r-l+1;
        //cout<<nn<<" "<<xx<<" "<<yy<<" "<<zz<<endl;
        if(nn<3){yes();continue;}
        if(nn%3==0){
            if(xx==nn/3&&yy==nn/3&&zz==nn/3)yes();
            else no();
        }
        else if(nn%3==1){
            vi comp={nn/3,nn/3,nn/3+1};
            vi xyz={xx,yy,zz};sort(all(xyz));
            //for(auto x:comp)cout<<x<<" ";cout<<endl; 
            if(xyz==comp)yes();
            else no();
        }
        else{
            vi comp={nn/3,nn/3+1,nn/3+1};
            vi xyz={xx,yy,zz};sort(all(xyz));
            if(xyz==comp)yes();
            else no();
        }
    }
}

