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
void bubble_sort_recursive(int a[] , int n , int j ) {
	if ( n == 1) {
		return ;
	}
	if ( j == (n - 1 )) {
		return bubble_sort_recursive(a, n - 1 , 0);
	}
	if (a[j] > a[j + 1]) {
		swap(a[j], a[j + 1]);
	}
	bubble_sort_recursive( a , n , j + 1);
	return ;
}
void bubble_sort(int *a, int n ) {
	// partially recursive partially iterative
	if (n <= 1) {
		return;
	}
	for ( int j = 0 ; j < n - 1; j++) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}
	bubble_sort(a , n - 1 );
}
void solve() {
	int N ;
	cin >> N ;
	int arr[N];
	for (int i = 0 ; i < N ; i++) {
		cin >> arr[i];
	}
	// bubble_sort(arr , N);
	bubble_sort_recursive(arr , N , 0);
	for ( int x : arr) {
		cout << x << " ";
	}

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