#include <bits/stdc++.h>
using namespace std;

// Your task is to calculate the number of bit strings of length n.

// For example, if n=3, the correct answer is 8, because the possible bit strings are 
// 000, 001, 010, 011, 100, 101, 110, and 111.

// Input

// The only input line has an integer n.

// Output

// Print the result modulo 1e10+7.

// Constraints
// 1≤n≤1e6
// Example

// Input:
// 3

// Output:
// 8

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

ll mod = 1e9+7;

int main() {
	sync;
	int s;
	cin >> s;

	ll n = 1;

	for (int i = 0; i < s; i++) {
		n = 2*n%mod;
	}

	cout << n%mod << nl;

	return 0;
}