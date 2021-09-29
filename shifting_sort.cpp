#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
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
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define rep(i,s,e) for(ll i=s;i<e;i++)
#define repp(i,s,e) for(ll i=s;i<=e;i++)
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
ll idx;

int helper(vector<ll> &arr, int n, int i) {
    ll maxi = INT_MIN;
    idx = -1;
    repp(j, 0, i) {
        if (maxi < arr[j]) {
            maxi = arr[j];
            idx = j;
        }
    }
    return idx;
}

void print(vector<vector<ll>> ans) {
    cout << ans.size() << nline;
    for (auto it : ans) {
        for (auto x : it) cout << x << " ";
        cout << nline;
    }
}

void help(vector<ll> &arr, int n, int idx, int i, vector<vector<ll>> &ans) {
    vector<ll> temp;
    vector<ll> dummy(n);
    for (int j = 0; j <= i; j++) {
        dummy[j] = arr[(j + idx + 1) % (i + 1)];
    }
    arr = dummy;
    ans.pb({1, i + 1, idx + 1});
}


void solve()
{
    ll n; cin >> n;
    vector<ll> arr(n);
    rep(i, 0, n) cin >> arr[i];
    vector<vector<ll>> ans;
    for (int i = n - 1; i > 0; i--) {
        helper(arr, n, i);
        if (idx == i) continue;
        else {
            help(arr, n, idx, i, ans);
        }
    }
    print(ans);
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
