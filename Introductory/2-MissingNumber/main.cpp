#include <bits/stdc++.h>
using namespace std;

// You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

// Input

// The first input line contains an integer n.

// The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

// Output

// Print the missing number.

// Constraints
// 2≤n≤2e5
// Example

// Input:
// 5
// 2 3 1 5

// Output:
// 4

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"

int main() {
	sync;
	int n;
	cin >> n;
	int s = 0;
	for (int i = 0; i < n - 1; i++) {
		int a;
		cin >> a;
		s += a;
	}

	// Sum numbers 1 to n, then subtract the numbers they gave to find missing
	int ans = n*(n+1)/2 - s;
	cout << ans << nl;

	return 0;
}