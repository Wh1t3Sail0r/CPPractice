#include <bits/stdc++.h>
using namespace std;

// There are n sticks with some lengths. Your task is to modify the sticks so that each stick has the same length.

// You can either lengthen and shorten each stick. Both operations cost x where x is the difference between the new and original length.

// What is the minimum total cost?

// Input

// The first input line contains an integer n: the number of sticks.

// Then there are n integers: p1,p2,…,pn: the lengths of the sticks.

// Output

// Print one integer: the minimum total cost.

// Constraints
// 1≤n≤2⋅105
// 1≤pi≤109
// Example

// Input:
// 5
// 2 3 1 5 2

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
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll med = v[n/2];
	ll cost = 0;
	for (int i = 0; i < n; i++) {
		cost += abs(med - v[i]);
	}
	cout << cost << nl;
	return 0;
}