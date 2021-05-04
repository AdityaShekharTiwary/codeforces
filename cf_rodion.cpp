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
	int n, t;
	cin >> n >> t;

	if (n == 1 && t == 10) {
		cout << -1;
		return;
	}
	cout << t;

	int a = 0;
	if (t == 10)
		++a;
	n--;
	for (; a < n; a++)
		cout << 0;

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
