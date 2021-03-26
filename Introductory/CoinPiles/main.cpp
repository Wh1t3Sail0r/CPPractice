#include <bits/stdc++.h>
using namespace std;

// You have two coin piles containing a and b coins. On each move, you can either 
// remove one coin from the left pile and two coins from the right pile, or two coins 
// from the left pile and one coin from the right pile.

// Your task is to efficiently find out if you can empty both the piles.

// Input

// The first input line has an integer t: the number of tests.

// After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

// Output

// For each test, print "YES" if you can empty the piles and "NO" otherwise.

// Constraints
// 1≤t≤1e5
// 0≤a,b≤1e9
// Example

// Input:
// 3
// 2 1
// 2 2
// 3 3

// Output:
// YES
// NO
// YES

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		ll a, b;
		cin >> a >> b;
		if ((a + b)%3) {
			cout << "NO" << nl;
		}
		else if (2*a >= b && 2*b >= a) {
			cout << "YES" << nl;
		}
		else {
			cout << "NO" << nl;
		}
	}

	return 0;
}