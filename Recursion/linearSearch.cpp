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
// different style of writing samme function
int linear_search_like_itereative(int *a , int i , int key , int size ) {
	// base case
	if (i >= size ) {
		return -1 ;
	}
	// current
	if (a[i] == key) {
		return i ;
	}
	return linear_search_like_itereative(a , i + 1 , key , size);

}
int firstOcc(int *a , int size , int key ) {
	if (size <= 0 ) {
		return -1 ;
	}

	if (a[0] == key) {
		return 0 ;
	}
	int i = firstOcc( a + 1 , size - 1 , key  );
	if ( i != -1 ) {
		return i + 1 ;
	}
	return i ;
}

void solve() {
	int N ;
	cin >> N ;
	int arr[N];
	for ( int i = 0 ; i < N ; i++) {
		cin >> arr[i];
	}
	int key ;
	cin >> key ;
	// int ans = firstOcc(arr , N , key);
	int ans = linear_search_like_itereative(arr, 0 , key , N );
	cout << ans;

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