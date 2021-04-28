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
	int n;
	cin >> n;
	vector<int> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	vector<int> pos(n + 1);
	for (int i = 1; i < n; i++) {
		pos[s[i]] = i;
	}
	for (int i = 0; i < pos[n]; i++) {
		cout << endl;
	}
	cout << s[pos[n]];
	int prv = pos[n];
	for (int i = n - 1; i > 0; i--) {
		if (pos[i] < prv) {
			cout << " " << s[pos[i]];
		} else {
			int bfr = pos[i] - prv;
			while (bfr--) {
				cout << endl;
			}
			cout << s[pos[i]];
			prv = pos[i];
		}
	}
	cout << endl;
}


int main()
{
	fast();

	//test
	{
		solve();
	}

	return 0;
}
