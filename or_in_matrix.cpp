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


void solve()
{
    int m, n; cin >> m >> n;
    vector<vector<int>> arr(m, vector<int> (n));
    rep(i, 0, m) {
        rep(j, 0, n) {
            cin >> arr[i][j];
        }
    }

    vector<pair<int, int>> pos;
    rep(i, 0, m) {
        rep(j, 0, n) {
            if (arr[i][j] == 0) {
                pos.pb({i, j});
            }
        }
    }
    // debug(pos)


    vector<vector<int>> res(m, vector<int> (n, 1));
    for (auto x : pos) {
        int i = x.ff;
        int j = x.ss;
        rep(i, 0, m) {
            res[i][j] = 0;
        }
        rep(j, 0, n) {
            res[i][j] = 0;
        }
    }

    debug(res)

    vector<vector<int>> temp(m, vector<int> (n, 0));

    rep(i, 0, m) {
        rep(j, 0, n) {
            int x = 0;
            rep(k, 0, m) {
                x = x | res[k][j];
            }
            rep(k, 0, n) {
                x = x | res[i][k];
            }
            temp[i][j] = x;
        }
    }

    bool same = true;
    rep(i, 0, m) {
        rep(j, 0, n) {
            if (arr[i][j] != temp[i][j]) same = false;
        }
    }

    if (!same) {
        cout << "NO" << nline;
        return;
    }

    cout << "YES" << nline;
    rep(i, 0, m) {
        rep(j, 0, n) cout << res[i][j] << " ";
        cout << nline;
    }


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


