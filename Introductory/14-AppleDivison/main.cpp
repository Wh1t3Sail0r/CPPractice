#include <bits/stdc++.h>
using namespace std;

// There are n apples with known weights. Your task is to divide the apples into 
// two groups so that the difference between the weights of the groups is minimal.

// Input

// The first input line has an integer n: the number of apples.

// The next line has n integers p1,p2,…,pn: the weight of each apple.

// Output

// Print one integer: the minimum difference between the weights of the groups.

// Constraints
// 1≤n≤20
// 1≤pi≤1e9
// Example

// Input:
// 5
// 3 2 7 4 1

// Output:
// 1

// Explanation: Group 1 has weights 2, 3 and 4 (total weight 9), and 
// group 2 has weights 1 and 7 (total weight 8).

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	int n;
	cin >> n;
	ll ar[20] = {};
	for (int i = 0; i < n; i++) { 
		cin >> ar[i];
	}

	ll sum = 0, ans = 0;
	for (ll l : ar) 
		sum += l;

	// Iterate over all 2^n subsets (1<<n right-shifts 1 n times so it becomes 1000...binary)
	for (int i = 0; i < (1<<n); i++) {
		ll currsum = 0;

		for (int j = 0; j < n; j++) {
			// Left shift i j times
			// This allows us to traverse binarily over all subsets and get sums
			if ((i>>j)&1) {
				currsum += ar[j];
			}
		}
		if (currsum <= sum/2) {
			ans = max(ans, currsum);
		}
	}
	cout << sum - 2*ans << nl;

	return 0;
}