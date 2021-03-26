#include <bits/stdc++.h>
using namespace std;

// You are given an array of n integers, and your task is to find three values (at distinct positions) whose sum is x.

// Input

// The first input line has two integers n and x: the array size and the target sum.

// The second line has n integers a1,a2,…,an: the array values.

// Output

// Print three integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.

// Constraints
// 1≤n≤5000
// 1≤x,ai≤109
// Example

// Input:
// 4 8
// 2 7 5 1

// Output:
// 1 3 4

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
	vt<ar<ll, 2>> v(n);
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i][0], sum += v[i][0];
		v[i][1] = i+1;
	}
	if (sum > x && n <= 3) {
		cout << "IMPOSSIBLE" << nl;
		return 0;
	}
	sort(all(v));
	for (int i = 0; i < n; i++) {
		ll x2 = x - v[i][0];
		for (int j = i + 1, k = n - 1; j < k; j++) {
			while (v[j][0] + v[k][0] > x2) {
				k--;
			}
			if (v[j][0] + v[k][0] == x2) {
				cout << v[i][1] << " " << v[j][1] << " " << v[k][1] << nl;
				return 0;
			}
		}
	}
	cout << "IMPOSSIBLE" << nl;
	return 0;
}