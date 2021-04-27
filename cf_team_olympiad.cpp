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

	int n; cin >> n;
	int arr[n];
	int ans = 0;
	input_arr
	int hash[4] = {0};
	f(i, 0, n) hash[arr[i]]++;
	if (hash[1] == 0 || hash[2] == 0 || hash[3] == 0 ) cout << 0 << endl;
	else {
		ans = min({hash[1], hash[2], hash[3]}) ;
		cout << ans << endl;
	}
	while (ans--) {
		int count = 0;
		while (count != 3) {
			for (int i = 0; i < n; i++) {
				if (arr[i] == 1 && count == 0) {
					cout << i + 1 << " ";
					arr[i] = 0;
					count++;;
				}
				if (arr[i] == 2 && count == 1) {
					cout << i + 1 << " ";
					arr[i] = 0;
					count++;
				}
				if (arr[i] == 3 && count == 2) {
					cout << i + 1 << " ";
					arr[i] = 0;
					count++;
				}
			}
		}
		cout << endl;

	}
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
