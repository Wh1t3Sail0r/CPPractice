#include <bits/stdc++.h>
using namespace std;

// There is a large hotel, and n customers will arrive soon. Each customer wants to have a single room.
//
// You know each customer's arrival and departure day. Two customers can stay in the same room if the departure day of the first customer is earlier than the arrival day of the second customer.
//
// What is the minimum number of rooms that are needed to accommodate all customers? And how can the rooms be allocated?
//
// Input
//
// The first input line contains an integer n: the number of customers.
//
// Then there are n lines, each of which describes one customer. Each line has two integers a and b: the arrival and departure day.
//
// Output
//
// Print first an integer k: the minimum number of rooms required.
//
// After that, print a line that contains the room number of each customer in the same order as in the input. The rooms are numbered 1,2,…,k. You can print any valid solution.
//
// Constraints
// 1≤n≤2⋅105
// 1≤a≤b≤109
// Example
//
// Input:
// 3
// 1 2
// 2 4
// 4 4
//
// Output:
// 2
// 1 2 1

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
	vt<ar<int, 3>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i][1] >> v[i][0];
		v[i][2] = i;
	}
	sort(v.begin(), v.end());
	vt<int> rooms(n);
	set<ar<int, 2>> s;
	for (int i = 0; i < n; i++) {
		auto it = s.lower_bound({v[i][1]});
		if (it != s.begin()) {
			it--;
			rooms[v[i][2]] = (*it)[1];
			s.erase(it);
		}
		else {
			rooms[v[i][2]] = s.size();
		}
		s.insert({v[i][0], rooms[v[i][2]]});
	}
	cout << s.size() << nl;
	for (auto r : rooms) {
		cout << r+1 << " ";
	}
	cout << nl;
	return 0;
}
