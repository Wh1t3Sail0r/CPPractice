#include <bits/stdc++.h>
using namespace std;

// You are given an array of n integers, and your task is to find two values (at distinct positions) whose sum is x.

// Input

// The first input line has two integers n and x: the array size and the target sum.

// The second line has n integers a1,a2,…,an: the array values.

// Output

// Print two integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.

// Constraints
// 1≤n≤2⋅105
// 1≤x,ai≤109
// Example

// Input:
// 4 8
// 2 7 5 1

// Output:
// 2 4

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 
#define ar array


int main() {
	sync;
	int n, x;
	cin >> n >> x;
	vt<ll> v1(n), v2(n);
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v1[i] = a;
		v2[i] = a;
	}
	if (v1.size() == 1) {
		cout << "IMPOSSIBLE" << nl;
		return 0;
	}
	
	sort(v2.begin(), v2.end());
	int l = 0, r = n - 1, target = v2[l] + v2[r];
	while (target != x && r != l) {
		if (target > x) {
			r--;
		}
		else if (target < x) {
			l++;
		}
		target = v2[l] + v2[r];
		if (r <= l) {
			cout << "IMPOSSIBLE" << nl;
			return 0;
		}
	}
	ll ansl = 0, ansr = 0;

	if (target == x) {
		for (int i = 0; i < n; i++) {
			if (v1[i] == v2[l]) ansl = i;
		}
		for (int i = 0; i < n; i++) {
			if (v1[i] == v2[r] && i != ansl) ansr = i;
		}
		cout << ansl+1 << " " << ansr+1 << nl;
	}
	else {
		cout << "IMPOSSIBLE" << nl;
	}
	return 0;
}