#include <bits/stdc++.h>
using namespace std;

// In a movie festival n movies will be shown. You know the starting and ending time of each movie. What is the maximum number of movies you can watch entirely?

// Input

// The first input line has an integer n: the number of movies.

// After this, there are n lines that describe the movies. Each line has two integers a and b: the starting and ending times of a movie.

// Output

// Print one integer: the maximum number of movies.

// Constraints
// 1≤n≤2⋅105
// 1≤a<b≤109
// Example

// Input:
// 3
// 3 5
// 4 9
// 5 8

// Output:
// 2

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 
#define ar array

bool endEarly(ar<int, 2> &a, ar<int, 2> &b) {
	return a[1] < b[1];
}

int main() {
	sync;
	int n;
	cin >> n;
	vt<ar<int, 2>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i][0] >> v[i][1];
	}	
	sort(v.begin(), v.end(), endEarly);
	cout << nl << nl;
	ll ans = 1;
	
	ll currE = v[0][1];
	for (int i = 1; i < n; i++) {
		if (!(v[i][0] < currE)) {
			ans++;
			currE = v[i][1];
		}
	}
	cout << ans << nl;

	return 0;
}