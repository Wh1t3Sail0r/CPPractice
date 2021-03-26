#include <bits/stdc++.h>
using namespace std;

// Given a string, your task is to generate all different strings that can be created using 
// its characters.

// Input

// The only input line has a string of length n. Each character is between a–z.

// Output

// First print an integer k: the number of strings. Then print k lines: 
// the strings in alphabetical order.

// Constraints
// 1≤n≤8
// Example

// Input:
// aabac

// Output:
// 20
// aaabc
// aaacb
// aabac
// aabca
// aacab
// aacba
// abaac
// abaca
// abcaa
// acaab
// acaba
// acbaa
// baaac
// baaca
// bacaa
// bcaaa
// caaab
// caaba
// cabaa
// cbaaa

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	string s;
	cin >> s;
	ll n = 0;
	vector<string> v;

	sort(s.begin(), s.end());
	do {
		n++;
		v.pb(s);
	} while (next_permutation(s.begin(), s.end()));

	cout << n << nl;
	for (string sv : v) cout << sv << nl;

	return 0;
}