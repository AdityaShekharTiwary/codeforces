#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back

#ifndef ONLINE_JUDGE
#define debug(a) cerr << #a << " " << a << " ";
#else
#define debug(x)
#endif

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
	freopen("Error.txt", "w", stderr);
#endif

	fast_IO
	cout.tie(NULL);
}

void solve()
{
	int n; cin >> n;
	vector<string> v;
	while (n--) {
		string s; cin >> s;
		v.pb(s);
	}
	string fin = v[0];
	int cnt = 1, ans = 1;;
	sort(v.begin(), v.end());
	f(i, 0, v.size()) {
		if (v[i] == v[i + 1]) {
			cnt++;
			if (cnt > ans) {
				ans = cnt;
				fin = v[i];
			}
		}
		else cnt = 1;
	}
	ans = max(cnt, ans);
	cout << fin << endl;

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
