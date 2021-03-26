#include <bits/stdc++.h>
using namespace std;

// There are n books, and Kotivalo and Justiina are going to read them all. For each book, you know the time it takes to read it.

// They both read each book from beginning to end, and they cannot read a book at the same time. What is the minimum total time required?

// Input

// The first input line has an integer n: the number of books.

// The second line has n integers t1,t2,…,tn: the time required to read each book.

// Output

// Print one integer: the minimum total time.

// Constraints
// 1≤n≤2⋅105
// 1≤ti≤109
// Example

// Input:
// 3
// 2 8 3

// Output:
// 16

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 
#define ar array


int main() {
	sync;
	int n;
	cin >> n;
	vt<int> v(n);
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i], sum += v[i];
	}
	sort(v.begin(), v.end());
	ll ans = max(sum, (ll)2*v[n-1]);
	cout << ans << nl;

	return 0;
}