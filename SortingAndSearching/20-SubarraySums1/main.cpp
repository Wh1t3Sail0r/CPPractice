#include <bits/stdc++.h>
using namespace std;

// Given an array of n positive integers, your task is to count the number of subarrays having sum x.

// Input

// The first input line has two integers n and x: the size of the array and the target sum x.

// The next line has n integers a1,a2,…,an: the contents of the array.

// Output

// Print one integer: the required number of subarrays.

// Constraints
// 1≤n≤2⋅105
// 1≤x,ai≤109
// Example

// Input:
// 5 7
// 2 4 1 2 7

// Output:
// 3

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 
#define ar array
#define all(x) x.begin(), x.end()


int main() {
	sync;
	ll n, x;
	cin >> n >> x;
	ll ans = 0, s = 0, c;
	map<ll, int> mp;
	mp[0]++;
	for (int i = 0; i < n; i++) {
		cin >> c;
		s += c;
		ans += mp[s - x];
		mp[s]++;
	}
	cout << ans << nl;
	return 0;
}