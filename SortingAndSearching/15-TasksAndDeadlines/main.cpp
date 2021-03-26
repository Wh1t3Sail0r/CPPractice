#include <bits/stdc++.h>
using namespace std;

// You have to process n tasks. Each task has a duration and a deadline, and you will process the tasks in some order one after another.
// Your reward for a task is d−f where d is its deadline and f is your finishing time. (The starting time is 0, and you have to process all tasks even if a task would yield negative reward.)
//
// What is your maximum reward if you act optimally?
//
// Input
//
// The first input line has an integer n: the number of tasks.
//
// After this, there are n lines that describe the tasks. Each line has two integers a and d: the duration and deadline of the task.
//
// Output
//
// Print one integer: the maximum reward.
//
// Constraints
// 1≤n≤2⋅105
// 1≤a,d≤106
// Example
//
// Input:
// 3
// 6 10
// 8 15
// 5 12
//
// Output:
// 2

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
	vt<ar<int, 2>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i][0] >> v[i][1];
	}
	sort(v.begin(), v.end());
	ll t = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		t += v[i][0];
		ans += v[i][1] - t;
	}
	cout << ans << nl;
	return 0;
}
