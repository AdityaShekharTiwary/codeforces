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
	ll n, k; cin >> n >> k;
	ll r = (n + 1) / 2;
	if (r >= k) cout << k * 2 - 1 << endl;
	else cout << (k - r) * 2 << endl;
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
