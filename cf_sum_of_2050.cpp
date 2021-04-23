#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define ld long double

int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	ll mod = (ll)1e9 + 7;
	while (t--)
	{
		ll n;
		cin >> n;
		ll x = 2050;
		vector<ll>stock;
		while (x <= 1e18 && x >= 0)
		{
			stock.push_back(x);
			x = x * 10;

		}
		reverse(stock.begin(), stock.end());
		ll i = 0;
		ll n1 = stock.size();
		ll cnt = 0;
		while (i < n1)
		{
			while (stock[i] <= n && n > 0)
			{	cnt++;
				n -= stock[i];
			}
			//cout<<stock[i]<<endl;
			i++;
		}
		if (n == 0)cout << cnt << endl;
		else cout << -1 << endl;
	}



	return 0;
}