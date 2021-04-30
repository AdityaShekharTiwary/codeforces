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


void solve()
{
	ll r, b, d; cin >> r >> b >> d;
	bool flag = true;
	if (d == 0 && r != b) flag = false;
	else {
		ll counter = min(r, b);
		ll current_count = 0;
		while (counter--) {
			current_count += d + 1;
		}
		if (current_count < max(r, b)) flag = false;
	}
	if (flag) cout << "YES\n";
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
