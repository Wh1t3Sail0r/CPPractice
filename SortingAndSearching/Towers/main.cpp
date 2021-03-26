#include <bits/stdc++.h>
using namespace std;

// You are given n cubes in a certain order, and your task is to build towers using them. Whenever two cubes are one on top of the other, the upper cube must be smaller than the lower cube.

// You must process the cubes in the given order. You can always either place the cube on top of an existing tower, or begin a new tower. What is the minimum possible number of towers?

// Input

// The first input line contains an integer n: the number of cubes.

// The next line contains n integers k1,k2,…,kn: the sizes of the cubes.

// Output

// Print one integer: the minimum number of towers.

// Constraints
// 1≤n≤2⋅105
// 1≤ki≤109
// Example

// Input:
// 5
// 3 8 2 1 5

// Output:
// 2

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
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vt<ll> ans;
	ans.pb(v[0]);
	for (int i = 1, j = 0; i < n; i++) {
		if (v[i] >= ans[j]) {
			auto up = upper_bound(ans.begin(), ans.end(), v[i]);
			if (up == ans.end()) {
				ans.pb(v[i]);
			}
			else {
				ans[up - ans.begin()] = v[i];
			}
		}
		else {
			ans[j] = v[i];
		}
	}
	cout << ans.size() << nl;
	return 0;
}