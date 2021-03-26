#include <bits/stdc++.h>
using namespace std;

// There are n children who want to go to a Ferris wheel, and your task is to find a 
// gondola for each child.

// Each gondola may have one or two children in it, and in addition, the total weight 
// in a gondola may not exceed x. You know the weight of every child.

// What is the minimum number of gondolas needed for the children?

// Input

// The first input line contains two integers n and x: the number of children and the 
// maximum allowed weight.

// The next line contains n integers p1,p2,…,pn: the weight of each child.

// Output

// Print one integer: the minimum number of gondolas.

// Constraints
// 1≤n≤2⋅105
// 1≤x≤109
// 1≤pi≤x
// Example

// Input:
// 4 10
// 7 2 3 9

// Output:
// 3

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 

int main() {
	sync;
	ll n, x;
	cin >> n >> x;
	vt<ll> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll ans = 0;

	// Two pointer method: count all pairs that are less than total weight
	// Subtract number of pairs from total number of people, bc a pair takes 1 gondola
	for (int i = 0, j = n-1; i < j; i++, j--) {
		while (i<j && v[i]+v[j] > x) {
			j--;
		}
		if (i >= j)
			break;
		ans++;
	}
	cout << n - ans << nl;

	return 0;
}