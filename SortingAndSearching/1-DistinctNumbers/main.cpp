#include <bits/stdc++.h>
using namespace std;

// You are given a list of n integers, and your task is to calculate the number of 
// distinct values in the list.

// Input

// The first input line has an integer n: the number of values.

// The second line has n integers x1,x2,…,xn.

// Output

// Print one integers: the number of distinct values.

// Constraints
// 1≤n≤2⋅1e5
// 1≤xi≤1e9
// Example

// Input:
// 5
// 2 3 2 2 3

// Output:
// 2

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	set<int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.insert(a);
	}

	cout << s.size() << nl;

	return 0;
}