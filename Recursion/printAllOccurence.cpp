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
int store_occ( int *a , int n , int i , int key , int *output , int j ) {
	// base case
	if ( i >= n) {
		return j;
	}
	if ( a[i] == key) {
		output[j] = i ;
		j = j + 1 ;
	}
	return store_occ(a , n , i + 1 , key , output , j);

}
void print_all_occ(int *a , int N , int i , int key ) {
	if (i >= N ) {
		return ;
	}
	if ( a[i] == key) {
		cout << i << " " ;
	}
	print_all_occ(a, N , i + 1 , key);
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
	// int ans = last_occurence(arr , N , 0, key );
	// int ans = last_occurence_alternative(arr , N , key );
	print_all_occ(arr, N , 0 , key);
	int output[100];

	int size = store_occ(arr , N , 0 , key , output , 0);

	cout << " Size is " << size << endl;
	for ( int i = 0; i < size; i++) {
		cout << output[i] << " ";
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