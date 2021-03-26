#include <bits/stdc++.h>
using namespace std;

// There are n applicants and m free apartments. Your task is to distribute the apartments 
// so that as many applicants as possible will get an apartment.

// Each applicant has a desired apartment size, and they will accept any apartment whose 
// size is close enough to the desired size.

// Input

// The first input line has three integers n, m, and k: the number of applicants, the 
// number of apartments, and the maximum allowed difference.

// The next line contains n integers a1,a2,…,an: the desired apartment size of each 
// applicant. If the desired size of an applicant is x, he or she will accept any 
// apartment whose size is between x−k and x+k.

// The last line contains m integers b1,b2,…,bm: the size of each apartment.

// Output

// Print one integer: the number of applicants who will get an apartment.

// Constraints
// 1≤n,m≤2⋅1e5
// 0≤k≤1e9
// 1≤ai,bi≤1e9
// Example

// Input:
// 4 3 5
// 60 45 80 60
// 30 60 75

// Output:
// 2

#define sync ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ld long double
#define nl "\n"
#define pb push_back
#define vt vector 

int main() {
	// sync;

	// scanf/printf are faster that cin/cout but I still get time limit exceeded error
	ll n, m, k;
	// cin >> n >> m >> k;
	scanf("%lli %lli %lli", &n, &m, &k);
	vt<ll> ar(n);
	vt<ll> br(m), br1(m);

	if (m == 1) {
		printf("%d\n", 1);
		// cout << 1 << nl; 
		return 0;
	}

	for (ll i = 0; i < n; i++) {
		scanf("%lli", &ar[i]);
		// cin >> ar[i];
	}
	for (ll i = 0; i < m; i++) {
		ll b;
		scanf("%lli", &b);
		// cin >> b;
		br[i] = b - k;
		br1[i] = b + k;
	}
	if (k > br1[br1.size() - 1]) {
		printf("%lli\n", n);
		// cout << n << nl;
		return 0;
	}

	sort(ar.begin(), ar.end());
	sort(br.begin(), br.end());
	sort(br1.begin(), br1.end());

	ll ans = 0;

	// cout << nl << nl;
	// for (ll l : ar)
	// 	cout << l << " ";
	// cout << nl;
	// for (ll l : br)
	// 	cout << l << " ";
	// cout << nl;
	// for (ll l : br1)
	// 	cout << l << " ";
	// cout << nl << nl;

	for (ll i = 0; i < n; i++) {
		if (ar[i] > br1[0] && br1.size() >= 1 && br.size() >= 1) {
			br1.erase(br1.begin());
			br.erase(br.begin());
		}
		if (ar[i] >= br[0] && ar[i] <= br1[0] && ar.size() >= 1 && br1.size() >= 1 && br.size() >= 1) {
			// cout << br[0] << " " << ar[i] << " " << br1[0] << nl;
			ans++;
			br1.erase(br1.begin());
			br.erase(br.begin());
			ar.erase(ar.begin());
			i--;
		}
	}
	printf("%lli\n", ans);
	// cout << ans << nl; 
	return 0;
}