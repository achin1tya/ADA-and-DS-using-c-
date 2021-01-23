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
void merge(int * a , int start  , int end) {
	int i =  start ;
	int k = 0 ;
	int temp[end - start + 1];
	int mid = start + (end - start) / 2;
	int j = mid + 1;

	// merge two sorted arrays
	while ( i <= mid and j <= end) {
		if (a[i] <= a[j]) {
			temp[k] = a[i];
			i++;
			k++;
		}
		else {
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	// if left array is left
	while (i <= mid ) {
		temp[k] = a[i];
		i++;
		k++;
	}
	// if right array is left
	while (j <= end) {
		temp[k] = a[j];
		j++;
		k++;
	}

	// copy values from temp to a array .
	for ( int itr = start ; itr <= end ; itr++) {
		a[itr] = temp[itr - start];
	}
}

void mergeSort(int *a , int start , int end ) {
	if (start >= end ) {
		return ;
	}
	int mid = start + (end - start) / 2;
	mergeSort(a , start , mid );
	mergeSort(a , mid + 1 , end);
	merge(a , start , end  );

}
void solve()
{
	int n ;
	cin >> n;
	int arr[n];
	for ( int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	mergeSort(arr , 0 , n - 1  );
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