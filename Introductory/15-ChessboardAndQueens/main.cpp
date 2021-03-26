#include <bits/stdc++.h>
using namespace std;

// Your task is to place eight queens on a chessboard so that no two queens are 
// attacking each other. As an additional challenge, each square is either free or 
// reserved, and you can only place queens on the free squares. 
// However, the reserved squares do not prevent queens from attacking each other.

// How many possible ways are there to place the queens?

// Input

// The input has eight lines, and each of them has eight characters. 
// Each square is either free (.) or reserved (*).

// Output

// Print one integer: the number of ways you can place the queens.

// Example

// Input:
// ........
// ........
// ..*.....
// ........
// ........
// .....**.
// ...*....
// ........

// Output:
// 65

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

string s[8];
ll ans = 0;

// How to count diagonals on a board
//   0   1   2   3 
// 0 .   .   .   .
// 1 .   .   .   .
// 2 .   .   .   .
// 3 .   .   .   .

// Indices of diagonal squares from top left to bottom right is:
// r + c = diagonal number

// Indices of diagonal squares from top right to bottom left is:
// r - c + number of columns on board = diagonal number 

// On an 8x8 board, the diagonal number ranges from 0 to 14;
// There are 15 diagonals in a single direction on an 8x8 board 

// We don't need a row array since we're looping through all the rows to test queens
bool d1[15], d2[15], col[8];

void search(const string b[], int r) {
	if (r == 8) {
		ans++;
		return;
	}
	for (int c = 0; c < 8; c++) {
		if (col[c] || d1[r + c] || d2[r - c + 7] || b[r][c]=='*') continue;
		col[c] = d1[r + c] = d2[r - c + 7] = 1;
		search(b, r + 1);
		col[c] = d1[r + c] = d2[r - c + 7] = 0;
	}
}	

int main() {
	sync;
	memset(d1, 0, 15);
	memset(d2, 0, 15);
 	memset(col, 0, 8);

	for (int i = 0; i < 8; i++) {
		cin >> s[i];
	}

	// Calculate possibilities without reserved spaces first
	search(s, 0);	// Start searching from row 0; answer should be 92
	cout << ans << nl;
	return 0;
}