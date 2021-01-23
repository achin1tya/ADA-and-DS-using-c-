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
int stringToInteger(string input , int index)
{
	if (index < 0) {
		return 0 ;
	}
	int ans = (input[index] - '0' ) ;
	cout << ans << endl;
	int smallAns = stringToInteger(input , index - 1 );
	return smallAns * 10 + ans;
}
void solve()
{
	string input;
	cin >> input;
	int ans = stringToInteger(input , input.length() - 1 );
	cout << ans;
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