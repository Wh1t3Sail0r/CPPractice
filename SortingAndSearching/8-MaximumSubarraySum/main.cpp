#include <bits/stdc++.h>
using namespace std;

// Given an array of n integers, your task is to find the maximum sum of values in a contiguous, nonempty subarray.

// Input

// The first input line has an integer n: the size of the array.

// The second line has n integers x1,x2,…,xn: the array values.

// Output

// Print one integer: the maximum subarray sum.

// Constraints
// 1≤n≤2⋅105
// −109≤xi≤109
// Example

// Input:
// 8
// -1 3 -2 5 3 -5 2 2

// Output:
// 9

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
	ll best = -1e9, curr = -1e9;
	for (int i = 0; i < n; i++) {
		curr = max(v[i], curr + v[i]);
		best = max(best, curr);
	}
	cout << best << nl; 
	return 0;
}