#include<bits/stdc++.h>
using namespace std;
#define int long long int

int ar[2002];
int dp[2002][2002];

int solve(int i, int j) {
	if (dp[i][j] != -1) return dp[i][j];
	if (i == j) return 0;
	int tmp1 = solve(i + 1, j), tmp2 = solve(i, j - 1);
	dp[i][j] = ar[j] - ar[i] + min(tmp2, tmp1);
	return dp[i][j];
}

int32_t main() {
	memset(dp, -1, sizeof(dp));
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> ar[i];
	sort(ar, ar + n);
	int ans = solve(0, n - 1);
	cout << ans << endl;
}