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
string getSpellingForNumber(int num) {
	string arr[10] = {"zero", "one" , "two" , "three", "four", "five", "six", "seven", "eight", "nine"};
	return arr[num];
}
string findSpelling(int N ) {
	if (N <= 0) {
		return "";
	}
	string smallAns = findSpelling(N / 10);
	string ans = getSpellingForNumber(N % 10);
	return (smallAns + " " + ans);
}
void solve()
{
	int N ;
	cin >> N;
	string ans = findSpelling(N );
	cout << ans << endl;
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