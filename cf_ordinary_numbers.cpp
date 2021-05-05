#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define debug(a) cout << a << " "
#define Debug(a, b) cout << a << " " << b << '\n'
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
	ll n; cin >> n;
	if (n < 10) {
		cout << n << endl;
		return;
	}
	ll sum = 9, curr = 0;

	if (n >= 10 && n <= 100) {
		curr = 11;
		while (curr <= n) {
			curr += 11;
			sum++;
		}
	}
	if (n >= 100 && n <= 1000) {
		sum = 18;
		curr = 111;
		while (curr <= n) {
			curr += 111;
			sum++;
		}
	}

	if (n >= 1000 && n <= 10000) {
		sum = 27;
		curr = 1111;
		while (curr <= n) {
			curr += 1111;
			sum++;
		}
	}

	if (n >= 10000 && n <= 100000) {
		sum = 36;
		curr = 11111;
		while (curr <= n) {
			curr += 11111;
			sum++;
		}
	}

	if (n >= 100000 && n <= 1000000) {
		sum = 45;
		curr = 111111;
		while (curr <= n) {
			curr += 111111;
			sum++;
		}
	}

	if (n >= 1000000 && n <= 10000000) {
		sum = 54;
		curr = 1111111;
		while (curr <= n) {
			curr += 1111111;
			sum++;
		}
	}

	if (n >= 10000000 && n <= 100000000) {
		sum = 63;
		curr = 11111111;
		while (curr <= n) {
			curr += 11111111;
			sum++;
		}
	}

	if (n >= 100000000 && n <= 1000000000) {
		sum = 72;
		curr = 111111111;
		while (curr <= n) {
			curr += 111111111;
			sum++;
		}
	}




	cout << sum << endl;

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
