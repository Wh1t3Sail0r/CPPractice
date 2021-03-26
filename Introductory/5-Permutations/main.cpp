#include <bits/stdc++.h>
using namespace std;

// A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements 
// whose difference is 1.

// Given n, construct a beautiful permutation if such a permutation exists.

// Input

// The only input line contains an integer n.

// Output

// Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, 
// you may print any of them. If there are no solutions, print "NO SOLUTION".

// Constraints
// 1≤n≤1e7
// Example 1

// Input:
// 5

// Output:
// 4 2 5 3 1

// Example 2

// Input:
// 3

// Output:
// NO SOLUTION

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	int n;
	cin >> n;

	if (n < 4) {
		cout << "NO SOLUTION" << nl;
		return 0;
	}
	for (int i = n - 1; i > 0; i -= 2) {
		cout << i << " ";
	}
	for (int i = n; i > 0; i -= 2) {
		cout << i << " ";
	}
	cout << nl;

	return 0;
}