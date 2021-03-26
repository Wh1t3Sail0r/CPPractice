#include <bits/stdc++.h>
using namespace std;

// You are given a playlist of a radio station since its establishment. The playlist has a total of n songs.

// What is the longest sequence of successive songs where each song is unique?

// Input

// The first input line contains an integer n: the number of songs.

// The next line has n integers k1,k2,…,kn: the id number of each song.

// Output

// Print the length of the longest sequence of unique songs.

// Constraints
// 1≤n≤2⋅105
// 1≤ki≤109
// Example

// Input:
// 8
// 1 2 1 3 2 7 4 2

// Output:
// 5

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 
#define ar array


int main() {
	sync;
	int n;
	cin >> n;
	vt<ll> v(n);
	map<ll, ll> mp;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll ans = 0;
	for (int lp = 0, rp = 0; lp < n; lp++) {
		while (rp < n && mp[v[rp]] < 1) {
			mp[v[rp]]++;
			rp++;
		}
		ans = max(ans, (ll)(rp - lp));
		mp[v[lp]]--;
	}
	cout << ans << nl;
	return 0;
}