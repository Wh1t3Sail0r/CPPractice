#include <bits/stdc++.h>
using namespace std;

// You are given the arrival and leaving times of n customers in a restaurant.

// What was the maximum number of customers?

// Input

// The first input line has an integer n: the number of customers.

// After this, there are n lines that describe the customers. Each line has 
// two integers a and b: the arrival and leaving times of a customer.

// You may assume that all arrival and leaving times are distinct.

// Output

// Print one integer: the maximum number of customers.

// Constraints
// 1≤n≤2⋅105
// 1≤a<b≤109
// Example

// Input:
// 3
// 5 8
// 2 4
// 3 9

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
	vt<ar<int, 2>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		// Create two events for each customer: entering (+1 cust) and leaving (-1 cust) the restaurant.
		// If we sort the events according to time, then we can just loop through the events and add or subtract the customers and take the maximum value
		// A 	|--------------------|
		// B        |----------|      
		// C      |---------------------|        
		// D                     |--------|  
		// 	    + + +          - +   -  - -

		v.pb({a, 1});
		v.pb({b, -1});
	}
	sort(v.begin(), v.end());
	ll ans = 0, c = 0;
	for (auto a : v) {
		c += a[1];
		ans = max(ans, c);
	}
	cout << ans << nl;
	return 0;
}