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
int partition( int *arr , int start , int end ) {
	int i = start - 1 ;
	int j = start ;
	int pivotEle  = arr[end];
	for (  ; j < end;) {
		if (arr[j] < pivotEle) {
			i++;
			swap(arr[i], arr[j]);
		}
		j++;
	}
	swap(arr[i + 1], arr[end]);
	return i + 1;
}
void quickSort(int * a , int start , int end ) {
	// base case
	if ( start >= end) {
		return ;
	}
	int pivot = partition(a , start , end );
	quickSort(a , start , pivot - 1);
	quickSort(a, pivot + 1 , end);
}
void solve()
{
	int N ;
	cin >> N ;
	int arr[N];
	// take input
	for ( int i = 0 ; i < N ; i++) {
		cin >> arr[i];
	}

	quickSort(arr , 0 , N - 1 );

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