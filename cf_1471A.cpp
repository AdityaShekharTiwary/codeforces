#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int s1 = 0, s2 = 0;
		for (int i = 0; i < n; i++) {
			int v;
			cin >> v;
			s1 += v, s2 += (v + x - 1) / x;
		}
		cout << (s1 + x - 1) / x << ' ' << s2 << '\n';
	}
	return 0;
}
