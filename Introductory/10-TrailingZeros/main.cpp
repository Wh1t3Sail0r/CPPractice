#include <bits/stdc++.h>
using namespace std;

// Your task is to calculate the number of trailing zeros in the factorial n!.

// For example, 20!=2432902008176640000 and it has 4 trailing zeros.

// Input

// The only input line has an integer n.

// Output

// Print the number of trailing zeros in n!.

// Constraints
// 1≤n≤1e9
// Example

// Input:
// 20

// Output:
// 4

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	int n;
	cin >> n;
	int ans = 0;

	while (n/=5) {
		ans+=n;
	}
	cout << ans << nl;
	return 0;
}