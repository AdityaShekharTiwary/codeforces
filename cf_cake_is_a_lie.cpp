#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void fast()
{

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	fast_IO
	cout.tie(NULL);
}

int path(int i, int j, int n, int m, int amount) {
	if (i == n && j == m) {
		if (amount == 0) return 1;
		else return 0;
	}
	if (i > n || j > m) return 0;
	if (amount < 0) return 0;
	else return path(i + 1, j, n, m, amount - j) + path(i, j + 1, n, m, amount - i);
}

void solve()
{
	int n, m, k; cin >> n >> m >> k;
	if ((m - 1) + (n - 1)*m == k) cout << "YES\n";
	else cout << "NO\n";

}


int main()
{
	fast();

	test
	{
		solve();
	}

	return 0;
}
