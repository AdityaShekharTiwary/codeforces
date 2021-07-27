#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
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

vector<vector<int>> arr;
vector<bool> b;
ll cnt = 1;

void dfs(int i) {
    b[i] = true;
    rep(j, 0, arr[i].size()) {
        if (!b[arr[i][j]]) {
            cnt *= 2;
            dfs(arr[i][j]);
        }
    }
}


void solve()
{
    int n, m; cin >> n >> m;

    arr.resize(n + 3);
    b.resize(n + 3, false);
    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        arr[x].pb(y);
        arr[y].pb(x);
    }

    debug(arr)

    for (int i = 1; i <= n; i++) {
        if (!b[i]) dfs(i);
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