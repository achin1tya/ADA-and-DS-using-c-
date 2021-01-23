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
int power_recursive_optimized(int base , int power) {
	if (power <= 0) {
		return 1;
	}
	int temp = power_recursive_optimized(base , power / 2);
	if (power & 1) {
		return base * temp * temp ;
	}
	else {
		return temp * temp ;
	}

}
int power_recursive(int base , int power) {
	if (power <= 0 ) {
		return 1;
	}
	return base * power_recursive(base , power - 1);
}
void solve()
{
	int base , power ;
	cin >> base >> power;
	// int ans = power_recursive(base , power);
	int ans = power_recursive_optimized(base , power);
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