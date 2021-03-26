#include <bits/stdc++.h>
using namespace std;

// Given a string, your task is to reorder its letters in such a way that it becomes a 
// palindrome (i.e., it reads the same forwards and backwards).

// Input

// The only input line has a string of length n consisting of characters A–Z.

// Output

// Print a palindrome consisting of the characters of the original string. 
// You may print any valid solution. If there are no solutions, print "NO SOLUTION".

// Constraints
// 1≤n≤106
// Example

// Input:
// AAAACACBA

// Output:
// AACABACAA

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	string s;
	cin >> s;
	
	// Create an array that holds the number of each letter
	int c[26] = {};

	for (char d : s) {
		c[d - 'A']++;
	}

	// Count letters of odd frequency; if greater than 1 then no solution
	int o;
	for (int i = 0; i < 26; i++) {
		if (c[i]%2) o++;
	}
	if (o > 1) {
		cout << "NO SOLUTION"; 
		return 0;
	}

	string ans;

	// Collect all letters that have an even frequency and add half of them to the start
	for (int i = 0; i < 26; i++) {
		if ((c[i]%2)^1) {
			for (int j = 0; j < c[i]/2; j++) {
				ans += (char)(i + 'A');
			}
		}
	}
	cout << ans;

	// Find the odd frequency letter and print out all occurences
	for (int i = 0; i < 26; i++) {
		if (c[i]%2) {
			for (int j = 0; j < c[i]; j++) {
				cout << (char)('A' + i);
			}
		}
	}

	// Reverse the first step and print it
	reverse(ans.begin(), ans.end());
	cout << ans << nl;

	return 0;
}