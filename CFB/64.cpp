#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define f first
#define s second
 
using namespace std;
 
int i,j,n,m,v[300010],ans,x,y,a,b,k,fini[300010],D[300010],d,maxi,mini,zz,l,both,iv;
pair<int,int> sol[300010];
char c;
string s1,s2;
 
int main()
{
    #ifndef ONLINE_JUDGE
        ifstream cin(".in");
    #endif
        ios_base::sync_with_stdio(false);
    cin.tie( 0 );
	cin >> n;
	for( int i = 1 ; i <= n ; i ++ ){
		cin >> v[ i ];
	}
	for( int i = 1 ; i <= n ; i++ ){
		if( v[ i ] == 0 ){
			ans++;
			iv = 0;
		} else if( v[ i ] == 1 ){
 
			if( iv == 1 ){
				ans++;
				iv = 0;
			} else {
				iv = 1;
			}
		} else if( v[ i ] == 2 ){
			if( iv == 2 ){
				ans++;
				iv = 0;
			} else {
				iv = 2;
			}
		} else {
			if( iv == 1 ){
				iv = 2;
			} else if( iv == 2 ){
				iv = 1;
			}
		}
	}
	cout << ans;
return 0;
}
