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
int merge( int * a , int start , int end ) {
	int mid = start + (end - start ) / 2;
	int i = start;
	int j = mid + 1;
	int k = 0;
	int ans = 0 ;
	int temp[end - start + 1 ];
	while (i <= mid && j <= end) {
		if (a[i] <= a[j]) {
			temp[k] = a[i];
			k++;
			i++;
		}
		else {
			temp[k] = a[j ];
			ans += mid - i + 1;
			j++;
			k++;
		}
	}

	// fill the array if some elements are left in the array

	while ( i <= mid) {
		temp[k] = a[i];
		k++;
		i++;
	}
	while ( j <= end) {
		temp[k] = a[j];
		j++;
		k++;
	}

	for ( int itr = start ; itr <= end ; itr++) {
		a[itr] = temp[itr - start];
	}
	return ans ;
}
int countInversions(int * a , int start , int end) {
	// base case
	if (start >= end ) {
		return 0 ;
	}
	int mid = start + (end - start) / 2;
	int leftAns = countInversions(a , start , mid);
	int rightAns = countInversions(a , mid + 1 , end);

	int currentAns = merge(a , start , end);

	return (leftAns + rightAns + currentAns);
}
void solve()
{
	int arr[] = {1, 5, 2, 6, 3, 0};
	int n = sizeof(arr) / sizeof(int);
	int ans = countInversions(arr , 0 , n - 1);
	cout << ans << endl ;

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