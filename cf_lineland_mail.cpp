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
	ll arr[n];
	input_arr
	ll mini = INT_MAX, maxi = INT_MIN;
	for (int i = 0; i < n ; i++) {
		if (i == 0)
			cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[i] << endl;
		else if (i == n - 1)
			cout << arr[i] - arr[i - 1] << " " << arr[i] - arr[0] << endl;
		else
			cout << min((arr[i] - arr[i - 1]), (arr[i + 1] - arr[i])) << " " << max((arr[i] - arr[0]), (arr[n - 1] - arr[i])) << endl;
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
