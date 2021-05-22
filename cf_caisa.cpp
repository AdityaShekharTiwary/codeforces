#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void fast()
{

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	freopen("debug.txt", "w", stderr);
#endif

	fast_IO
	cout.tie(NULL);
}

const ll mod = 1e9 + 7;


void solve()
{
	int n; cin >> n;
	int arr[n + 1];
	arr[0] = 0;
	f(i, 1, n + 1) cin >> arr[i];
	int req = 0, ans = 0, curr = 0;
	for (int i = 0; i < n; i++) {
		req = arr[i] + curr - arr[i + 1];
		if (req < 0) {
			ans += abs(req);
			curr = 0;
		}
		else {
			curr += arr[i] - arr[i + 1];
		}
	}

	cout << ans << endl;


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
