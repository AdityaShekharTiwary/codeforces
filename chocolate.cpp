#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define nline "\n"


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


#define rep(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll mod = 1e9 + 7;


void fast()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif

    fast_IO
    cout.tie(NULL);
}



void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    rep(i, 0, n) cin >> arr[i];
    vector<int> stocks;
    int cnt = 1;
    rep(i, 0, n) {
        if (arr[i] == 1) stocks.pb(i + 1);
    }
    rep(i, 0, stocks.size() - 1) {
        cnt *= stocks[i + 1] - stocks[i];
    }
    cout << cnt << nline;
}



int main()
{
    fast();

    // test
    {

        solve();
    }


    return 0;
}