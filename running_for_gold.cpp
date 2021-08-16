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

bool winner(vector<int> curr_athelete, vector<int> curr_winner) {
    int cnt = 0;
    rep(i, 0, 5) {
        if (curr_athelete[i] < curr_winner[i]) cnt++;
    }
    return cnt >= 3 ? true : false;
}

void solve()
{
    int n; cin >> n;
    vector<vector<int>> arr;
    // debug(arr)
    vector<int> temp(5);
    rep(i, 0, n) {
        rep(j, 0, 5) cin >> temp[j];
        arr.pb(temp);

    }
    vector<int> curr = arr[0];
    int curr_winner = 0;
    rep(i, 1, n) {
        if (winner(arr[i], curr)) {
            curr_winner = i;
            curr = arr[curr_winner];
        }
    }

    int res = curr_winner;
    rep(i, 0, n) {
        if (winner(arr[i], arr[curr_winner])) {
            res = i;
        }
    }
    debug(mp(curr_winner, res))
    if (curr_winner != res) cout << -1 << nline;
    else cout << res + 1 << nline;

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
