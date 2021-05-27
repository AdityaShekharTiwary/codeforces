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
	int A = 0, B = 0, C = 0;
	int n = 3;
	while (n--) {
		string s; cin >> s;
		if ((s[0] == 'A' && s[1] == '>') || (s[2] == 'A' && s[1] == '<')) A++;
		if ((s[0] == 'B' && s[1] == '>') || (s[2] == 'B' && s[1] == '<')) B++;
		if ((s[0] == 'C' && s[1] == '>') || (s[2] == 'C' && s[1] == '<')) C++;

	}

	if (A == B || B == C || A == C) {
		cout << "Impossible\n";
		return;
	}
	string res = "mmm";
	res[A] = 'A';
	res[B] = 'B';
	res[C] = 'C';
	cout << res;


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