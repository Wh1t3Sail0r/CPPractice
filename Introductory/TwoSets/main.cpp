#include <bits/stdc++.h>
using namespace std;

// Your task is to divide the numbers 1,2,…,n into two sets of equal sum.

// Input

// The only input line contains an integer n.

// Output

// Print "YES", if the division is possible, and "NO" otherwise.

// After this, if the division is possible, print an example of how to create the sets. 
// First, print the number of elements in the first set followed by the elements themselves 
// in a separate line, and then, print the second set in a similar way.

// Constraints
// 1≤n≤1e7
// Example 1

// Input:
// 7

// Output:
// YES
// 4
// 1 2 4 7
// 3
// 3 5 6

// Example 2

// Input:
// 6

// Output:
// NO

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back

int main() {
	sync;
	ll n;
	cin >> n;
	set<ll> s1, s2;
	// If the sum of numbers from 1 to n is odd, print 'NO'
	if ((n * (n + 1)/2) % 2) cout << "NO" << nl;
	else {
		cout << "YES" << nl;
		// The sum we want in both sets is n*(n + 1)/4. This means that 
		// the sum is divisible by n and n + 1
		ll sum = n * (n + 1)/4;

		// sum is divisible by (n + 1)
		if (sum % n) {
			ll i = 1, j = n, total = 0;
			while (total != sum)  {
				s1.insert(j);
				s1.insert(i);
				total += (i + j);
				j--;
				i++;
			}
			total = 0;
			while (total != sum) {
				s2.insert(j);
				s2.insert(i);
				total += (i + j);
				j--;
				i++;
			}
		} 

		// sum is divisible by (n)
		else {
			ll i = 0, j = n, total = 0;
			while (total != sum)  {
				s1.insert(j);
				s1.insert(i);
				total += (i + j);
				j--;
				i++;
			}
			total = 0;
			while (total != sum) {
				s2.insert(j);
				s2.insert(i);
				total += (i + j);
				j--;
				i++;
			}
		}
		s1.erase(0);
		s2.erase(0);

		cout << s1.size() << nl;
		for (set<ll>::iterator it = s1.begin(); it != s1.end(); it++) {
			cout << *it << " ";
		}
		cout << nl;

		cout << s2.size() << nl;
		for (set<ll>::iterator it = s2.begin(); it != s2.end(); it++) {
			cout << *it << " ";
		}
		cout << nl;
	}

	return 0;
}