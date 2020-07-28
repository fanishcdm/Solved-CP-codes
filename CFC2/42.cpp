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
    int mx=10000;
    vi num(mx,1);
    fori(i,0,mx){
        string s = to_string(i);
        int len = s.length();
        reverse(all(s));
        foreq(j,len+1,4)s.pb('0');
        reverse(all(s));
        set<char> l;for(auto x:s)l.insert(x);
        if(l.size()<4)num[i]=0;
    }
    //cout<<accumulate(all(num),0);
    int n;cin>>n;
    fori(i,0,n){
        string a; int b,c;cin>>a>>b>>c;
        //cout<<b<<" "<<c<<endl;
        fori(j,0,mx){
            if(num[j]==0)continue;
            string s = to_string(j);
            int len = s.length();
            reverse(all(s));
            foreq(j,len+1,4)s.pb('0');
            reverse(all(s));
            int bb=0,cc=0;
            fori(k,0,4)if(s[k]==a[k])bb++;
            fori(k,0,4){
                fori(f,0,4)if(k!=f && a[k]==s[f]){cc++;break;}
            }
            if(bb!=b || cc!=c)num[j]=0;

            //if(num[j]==1)cout<<a<<endl<<s<<endl<<endl;
        }
    }
    int sum = accumulate(all(num),0);
    //cout<<sum<<endl;
    if(sum==0)cout<<"Incorrect data\n";
    else if(sum>1)cout<<"Need more data\n";
    else{
        int tp=-1;
        fori(i,0,mx)if(num[i]==1){tp=i;break;}
        if(tp!=-1){
            string s = to_string(tp);
            int len = s.length();
            reverse(all(s));
            foreq(j,len+1,4)s.pb('0');
            reverse(all(s));
            cout<<s<<endl;
        }
    }
}

