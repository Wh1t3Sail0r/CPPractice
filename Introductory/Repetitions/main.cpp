#include <bits/stdc++.h>
using namespace std;

// You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
// Your task is to find the longest repetition in the sequence. 
// This is a maximum-length substring containing only one type of character.

// Input

// The only input line contains a string of n characters.

// Output

// Print one integer: the length of the longest repetition.

// Constraints
// 1≤n≤1e7
// Example

// Input:
// ATTCGGGA

// Output:
// 3

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"

int main() {
	sync;
	string s;
	cin >> s;

	int best = 1, sum = 1;
	char c = s[0];
	for (int i = 1; i < s.length(); i++) {
		if (c == s[i]) {
			sum++;
			best = max(sum, best);
		}
		else {
			sum = 1;
			c = s[i];
		}
	}

	cout << best << nl;
	return 0;
}