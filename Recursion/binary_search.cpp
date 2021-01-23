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

// TODO make this optimized work
int binary_search_optimized(int a[] , int size , int key ) {
	if (size <= 0 ) {
		return -1 ;
	}
	int mid = size / 2;
	if (a[mid] == key) {
		return mid ;
	}
	else if ( a[mid] > key ) {
		return binary_search_optimized(a , size / 2 , key  );
	}
	else {
		return binary_search_optimized(a + mid + 1 , size / 2 , key ) + (size / 2);
	}
}
int binary_search_recursive(int a[], int start  , int end  , int key ) {
	int mid = start + ( end - start) / 2;
	if (start > end ) {
		return -1 ;
	}
	if ( a[mid] == key) {
		return mid;
	}
	else if (a[mid] > key) {
		end = mid - 1 ;
	}
	else {
		start = mid + 1;
	}
	return binary_search_recursive(a  , start ,  end , key );
}
void solve() {
	int N ;
	cin >> N ;
	int arr[N];
	for (int i = 0 ; i < N ; i++) {
		cin >> arr[i];
	}
	int key = 0 ;
	cin >> key;
	// int ans = binary_search_recursive(arr , 0 , N , key );
	int ans = binary_search_optimized(arr, N , key);
	if (ans != -1 ) {
		cout << "element is at " << ans;
	}
	else {
		cout << "element is not in array ";
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