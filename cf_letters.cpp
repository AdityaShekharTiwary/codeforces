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
	string s;
	getline(cin, s);
	set<char> mp;
	f(i, 0, s.size()) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			//cout << s[i] << " ";
			mp.insert(s[i]);
		}
	}
	cout << mp.size()  << endl;

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
