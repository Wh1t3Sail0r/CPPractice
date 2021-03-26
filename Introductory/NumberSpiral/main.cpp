#include <bits/stdc++.h>
using namespace std;

// A number spiral is an infinite grid whose upper-left square has number 1. 
// Here are the first five layers of the spiral:

// 1	2	9	10	25
// 4	3	8	11	24
// 5	6	7	12	23
// 16	15	14	13	22
// 17	18	19	20	21

// Your task is to find out the number in row y and column x.

// Input

// The first input line contains an integer t: the number of tests.

// After this, there are t lines, each containing integers y and x.

// Output

// For each test, print the number in row y and column x.

// Constraints
// 1≤t≤1e6
// 1≤y,x≤1e10
// Example

// Input:
// 3
// 2 3
// 1 1
// 4 2

// Output:
// 8
// 1
// 15

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
		ll y, x;
		cin >> y >> x;

		// Solution is in the red notebook, but here's the gist of it

		// y = 1, x = 1, return 1;
		// Whenever xmod2 = 0 and x > y, return x^2 - (2x - y - 1)
		// Whenever ymod2 = 0 and y > x, return y^2 - (x - 1)

		// Whenever xmod2 = 1 and x > y, return x^2 - (y - 1)
		// Whenever ymod2 = 1 and y > x, return y^2 - (2y - x - 1)
		if (x == 1 && y == 1) cout << 1 << nl;
		else {
			ll z = max(y, x);
			ll z2 = z*z;	

			if (z == x) {
				if (x%2) cout << x*x - (y - 1) << nl;
				else cout << x*x - (2*x - y - 1) << nl;
			}
			else {
				if (y%2) cout << y*y - (2*y - x - 1) << nl;
				else cout << y*y - (x - 1) << nl;
			}
		}
	}
	
	return 0;
}