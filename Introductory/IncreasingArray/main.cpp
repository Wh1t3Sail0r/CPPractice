#include <bits/stdc++.h>
using namespace std;

// You are given an array of n integers. 
// You want to modify the array so that it is increasing, i.e., every element is 
// at least as large as the previous element.

// On each turn, you may increase the value of any element by one. 
// What is the minimum number of turns required?

// Input

// The first input line contains an integer n: the size of the array.

// Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

// Output

// Print the minimum number of turns.

// Constraints
// 1≤n≤2e5
// 1≤xi≤1e10
// Example

// Input:
// 5
// 3 2 5 1 7

// Output:
// 5

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	int n;
	cin >> n;
	vector<ll> v;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.pb(a);
	}

	ll ans = 0;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] < v[i - 1]) ans += (v[i - 1] - v[i]);
	}

	cout << ans << nl;

	return 0;
}