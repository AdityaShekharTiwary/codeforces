#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define nline "\n"
#define all(x) (x).begin(), (x).end()


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

#define rep(i,s,e) for(int i=s;i<e;i++)
#define repp(i,s,e) for(int i=s;i<=e;i++)
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

vector<int> pos(100001);
vector<int> adj[100001];
vector<bool> vis(100001, false);

void dfs(int node, int m, int cat_count) {
    if (pos[node] == 1) cat_count++;
    else cat_count = 0;
    if (cat_count > m) return;
    vis[node] = true;

    for (auto it : adj[node]) {
        if (!vis[it]) {
            dfs(it, m, cat_count);
        }
    }
}

void solve()
{
    int n, m; cin >> n >> m;

    for (int i = 1; i <= n; i++) cin >> pos[i];

    for (int i = 1; i <= n - 1; i++) {
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(1, m, 0);

    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (vis[i] == 1 && adj[i].size() == 1 ) ans++;
    }

    cout << ans << nline;

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
