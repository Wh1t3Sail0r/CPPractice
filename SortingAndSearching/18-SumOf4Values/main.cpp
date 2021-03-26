#include <bits/stdc++.h>
using namespace std;

// You are given an array of n integers, and your task is to find four values (at distinct positions) whose sum is x.

// Input

// The first input line has two integers n and x: the array size and the target sum.

// The second line has n integers a1,a2,…,an: the array values.

// Output

// Print four integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.

// Constraints
// 1≤n≤1000
// 1≤x,ai≤109
// Example

// Input:
// 8 15
// 3 2 5 8 1 3 2 3

// Output:
// 2 4 6 7

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
	for (ll i = 0; i < n; i++) {
		cin >> v[i][0], sum += v[i][0];
		v[i][1] = i+1;
	}
	if (sum > x && n <= 4) {
		cout << "IMPOSSIBLE" << nl;
		return 0;
	}
	sort(all(v));
	if (v[0][0] > x) {
		cout << "IMPOSSIBLE" << nl;
		return 0;
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = i + 1; j < n; j++) {
			for (ll k = j + 1, l = n - 1; k < l; k++) {
				while (v[i][0] + v[j][0] + v[k][0] + v[l][0] > x) {
					l--;
				}
				if (v[i][0] + v[j][0] + v[k][0] + v[l][0] == x) {
					cout << v[i][1] << " " << v[j][1] << " " << v[k][1] << " " << v[l][1] << nl;
					return 0;
				}
			}
		}
	}
	cout << "IMPOSSIBLE" << nl;
	return 0;
}