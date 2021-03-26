#include <bits/stdc++.h>
using namespace std;

// There are n concert tickets available, each with a certain price. 
// Then, m customers arrive, one after another.

// Each customer announces the maximum price he or she is willing to pay for a 
// ticket, and after this, they will get a ticket with the nearest possible price 
// such that it does not exceed the maximum price.

// Input

// The first input line contains integers n and m: the number of tickets and the 
// number of customers.

// The next line contains n integers h1,h2,…,hn: the price of each ticket.

// The last line contains m integers t1,t2,…,tm: the maximum price for each customer.

// Output

// Print, for each customer, the price that they will pay for their ticket. After this,
// the ticket cannot be purchased again.

// If a customer cannot get any ticket, print −1.

// Constraints
// 1≤n,m≤2⋅105
// 1≤hi,ti≤109
// Example

// Input:
// 5 3
// 5 3 7 8 5
// 4 8 3

// Output:
// 3
// 8
// -1

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 
#define ar array

int main() {
	sync;
	int n, m;
	cin >> n >> m;
	set<ar<int, 2>> s;
	// Map each input to the position to keep order
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.insert({a, i});
	}
	for (int i = 0; i < m; i++) {
		int t;
		cin >> t;
		// Find the lower_bound (largest value equal to or less than the concert price + t)
		auto it = s.lower_bound({t + 1, 0});
		// If it doesn't exist, print -1
		if (it == s.begin()) {
			cout << -1 << nl;
		}
		// Otherwise, print the value and erase it (ticket has been bought)
		else {
			it--;
			cout << (*it)[0] << nl;
			s.erase(it);
		}
	}
	return 0;
}