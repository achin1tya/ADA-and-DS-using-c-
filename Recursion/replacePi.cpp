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

// Replace "PI" with "3.14"
// eg xgpi23pipilm   -> xg3.14233.143.14lm inplace


void solve()
{
	string input ;
	cin >> input;
	string ans = replacePi(input);
}
int main()
{
	fast
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt" , "w" , stdout);
#endif
	ll t ;
	cin >> t;
	while (t--) {
		solve();
	}
}