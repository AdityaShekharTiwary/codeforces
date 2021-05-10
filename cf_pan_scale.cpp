#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
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


#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

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





void solve()
{
	string s; cin >> s;
	string s2; cin >> s2;
	int f = 0;
	int left = 0, right = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '|')
			f = 1;
		if (f)
			right++;
		else
			left++;
	}
	right--;
	if (min(left, right) + s2.size() >= max(left, right) && (left + right + s2.size()) % 2 == 0)
	{
		int req = (left + right + s2.size()) / 2;
		int i = 0;
		while (left < req)
		{
			cout << s2[i++];
			left++;
		}
		cout << s;
		while (right < req)
		{
			cout << s2[i++];
			right++;
		}
	}
	else
		cout << "Impossible" << endl;
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
