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
int last_occurence_alternative(int *a , int size , int key ) {
	// base case
	if (size == 0 ) {
		return -1 ;
	}
	// recurse to last
	int lastIndex = last_occurence_alternative(a + 1 , size - 1 , key);
	//
	if (lastIndex ==  -1 ) {
		if (a[0] == key) {
			return 0 ;
		}
		else {
			return -1 ;
		}
	}
	// if lastIndex != -1
	return lastIndex + 1 ;
}
int last_occurence(int *a , int size , int i , int key ) {
	// base case
	if (size <= i ) {
		return -1 ;
	}

	int small_ans = last_occurence(a , size, i + 1, key);
	if (small_ans == -1 ) {
		if (a[i] == key) {
			return i ;
		}
	}
	return small_ans ;

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
	int ans = last_occurence_alternative(arr , N , key );
	cout << ans << endl;

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