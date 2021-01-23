#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(n) for (ll i=0;i<n;i++)
#define test ll t;cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#include<cstring>
#include<cmath>
#include<climits>
#include<algorithm>
#include<map>
int multiply_recursive(int a , int b ) {
	// multiplication is repeated addition
	if (b == 0 ) {
		return 0 ;
	}
	return a + multiply_recursive( a , b - 1);
}
void solve()
{
	int a , b ;
	cin >> a >> b;
	int ans = multiply_recursive(a , b);
	cout << ans << endl;
}
int main()
{
	fast
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt" , "w" , stdout);
#endif
	// ll t ;
	// cin >> t;
	// while (t--) {
	solve();
	// }
}