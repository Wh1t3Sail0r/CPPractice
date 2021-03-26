#include <bits/stdc++.h>
using namespace std;

// A factory has n machines which can be used to make products. Your goal is to make a total of t products.
//
// For each machine, you know the number of seconds it needs to make a single product. The machines can work simultaneously, and you can freely decide their schedule.
//
// What is the shortest time needed to make t products?
//
// Input
//
// The first input line has two integers n and t: the number of machines and products.
//
// The next line has n integers k1,k2,…,kn: the time needed to make a product using each machine.
//
// Output
//
// Print one integer: the minimum time needed to make t products.
//
// Constraints
// 1≤n≤2⋅105
// 1≤t≤109
// 1≤ki≤109
//
// Input:
// 3 7
// 3 2 5
//
// Output:
// 8
//
// Explanation: Machine 1 makes two products, machine 2 makes four products and machine 3 makes one product.

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl endl;
#define pb push_back
#define vt vector
#define ar array


int main() {
	sync;
	int n, t;
	cin >> n >> t;
	vt<ll> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll left = 1, right = 1e18;
	while (left < right) {
		ll mid = (left+right)/2, sum = 0;
		for (int i = 0; i < n ;i++) 
			sum += min(mid/v[i], (ll)1e9);
		if (sum >= t)
			right = mid;
		else
			left = mid+1;
	}
	cout << left << nl;
	return 0;
}
