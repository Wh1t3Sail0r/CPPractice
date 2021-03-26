#include <bits/stdc++.h>
using namespace std;

// There are 88418 paths in a 7×7 grid from the upper-left square to the lower-left square. 
// Each path corresponds to a 48-character description consisting of characters 
// D (down), U (up), L (left) and R (right).

// You are given a description of a path which may also contain characters ? (any direction). 
// Your task is to calculate the number of paths that match the description.

// Input

// The only input line has a 48-character string of characters ?, D, U, L and R.

// Output

// Print one integer: the total number of paths.

// Example

// Input:
// ??????R??????U??????????????????????????LD????D?

// Output:
// 201

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

bool vis[7][7];
int num = 0;
ll ans = 0;

bool valid(int r, int c) {
	return r>=0 && r<7 && c>=0 && c<7 && !(vis[r][c]);
}

void dfs(int r, int c, string p, ll num = 0) {
	// cout << r << "\t" << c << "\t" << num << "\t" << p[num] << "\t" << ans << nl;
	vis[r][c] = 1;

	if (r == 6 && c == 0 && num == 48) {
		ans++;
	}

	// up
	if (p[num] == 'U' || p[num] == '?') {
		if (valid(r-1, c))
			// Optimization: Do another dfs if:
			// 	We can go forward or we can't branch off into two unvisited paths
			if (valid(r-2, c) || !valid(r-1, c+1) || !valid(r-1, c-1))
				dfs(r-1, c, p, num + 1);
	}
	// down
	if (p[num] == 'D' || p[num] == '?') {
		if (valid(r+1, c))
			if (valid(r+2, c) || !valid(r+1, c+1) || !valid(r+1, c-1))
				dfs(r+1, c, p, num + 1);
	}
	// left
	if (p[num] == 'L' || p[num] == '?') {
		if (valid(r, c-1))
			if (valid(r, c-2) || !valid(r+1, c-1) || !valid(r-1, c-1))
				dfs(r, c-1, p, num + 1);
	}
	// right
	if (p[num] == 'R' || p[num] == '?') {
		if (valid(r, c+1))
			if (valid(r, c+2) || !valid(r+1, c+1) || !valid(r-1, c+1))
				dfs(r, c+1, p, num + 1);
	}
	vis[r][c] = 0;
	num = 0;

}

int main() {
	sync;
	string path;
	cin >> path;

	// Logic works but code is too slow to run the worst case (88418) in 1 second (19 s) :(
	auto start = chrono::high_resolution_clock::now();

	for (int i = 0; i < 7; i++) {
		memset(vis, 0, 7);
	}

	dfs(0, 0, path);
	cout << ans << nl;
	
	auto stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
	cout << "Runtime: "<< duration.count() << nl;
	return 0;
}