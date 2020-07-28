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
    string s;cin>>s;
    vi mod3(3,0); 
    int sum=0;
    fori(i,0,s.length()){
        sum+=s[i]-'0';
        mod3[(s[i]-'0')%3]++;
    }
    pii ans({0,-1});
    if(sum%3==0){
        cout<<s<<endl;return 0;
    }
    else if(sum%3==1){
        if(mod3[1]>=1)ans={1,1};
        else if(mod3[2]>=2)ans={2,2};
    }
    else{
         if(mod3[2]>=1)ans={2,1};
        else if(mod3[1]>=2)ans={1,2};
    }
    //cout<<ans.fi<<endl;
    string tc;
    if(ans.se==-1){cout<<"-1\n";return 0;}
    else{
        for(int i=0;s[i];++i){
            if(ans.se==0)tc.pb(s[i]);
            else{
                if((s[i]-'0')%3==ans.fi){ans.se--;continue;}
                else tc.pb(s[i]);
            }
        }
    }
    int st=0;
    if(tc.length()>=2){
        fori(i,0,tc.length())if(tc[i]!='0'){st=i;break;}
    }

    if(tc.length()>=1)for(int i=st;tc[i];++i)cout<<tc[i]; 
    else cout<<"-1";cout<<endl;

}

