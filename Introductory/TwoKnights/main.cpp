#include <bits/stdc++.h>
using namespace std;

// Your task is to count for k=1,2,…,n the number of ways two knights can be placed 
// on a k×k chessboard so that they do not attack each other.

// Input

// The only input line contains an integer n.

// Output

// Print n integers: the results.

// Constraints
// 1≤n≤10000
// Example

// Input:
// 8

// Output:
// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	int n;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		// Again, the work for the formula is in the red notebook, but here's the gist:
		// Total number of positions on a k x k board is k^2(k^2 - 1)/2

		// After we place a knight, we have k^2 - 1 spots remaining to place another knight
		// We divide by two because a black knight and a white knight on opposite squares 
		// is the same as a white knight and a black knight on opposite square
		
		// Number of spots where knights can attack each other is 4*(k - 1)*(k - 2)
		// This is the number of 3 x 2 or 2 x 3 sections on the k x k board
		
		cout << k*k * (k*k - 1)/2 - 4*(k - 1)*(k - 2) << nl;
	}

	return 0;
}