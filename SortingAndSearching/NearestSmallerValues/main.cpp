#include <bits/stdc++.h>
using namespace std;

// Given an array of n integers, your task is to find for each array position the nearest 
// position to its left having a smaller value.

// Input

// The first input line has an integer n: the size of the array.

// The second line has n integers x1,x2,…,xn: the array values.

// Output

// Print n integers: for each array position the nearest position with a smaller value. 
// If there is no such position, print 0.

// Constraints
// 1≤n≤2⋅105
// 1≤xi≤109
// Example

// Input:
// 8
// 2 5 1 4 8 3 2 5

// Output:
// 0 1 0 3 4 3 3 7

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 
#define ar array
#define all(x) x.begin(), x.end()


int main() {
	sync;
	int n;
	cin >> n;
	vt<ll> v(n), v1(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		v1[i] = i-1;
		while (v1[i] != -1 && v[v1[i]] >= v[i]) {
			v1[i] = v1[v1[i]];
		}
		cout << v1[i] + 1 << " ";
	}
	cout << nl;
	return 0;
}