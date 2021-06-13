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
    int n, m; cin >> n >> m;
    vector<vector<char>>s;
    vector<char>tp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char y; cin >> y;
            tp.pb(y);
        }
        s.push_back(tp);
        tp.clear();
    }

    vector<vector<char>> r_pehle, w_pehle;
    tp.clear();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                tp.push_back('R');
                tp.push_back('W');
            }
            else {
                tp.push_back('W');
                tp.push_back('R');
            }
        }
        r_pehle.push_back(tp);
        tp.clear();
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                tp.push_back('W');
                tp.push_back('R');
            }
            else {
                tp.push_back('R');
                tp.push_back('W');
            }
        }
        w_pehle.push_back(tp);
        tp.clear();
    }

    bool odd = false, even = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] != r_pehle[i][j] && s[i][j] != '.') odd = true;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] != w_pehle[i][j] && s[i][j] != '.') even = true;
        }
    }

    if (odd && even) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if (odd && !even) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cout << w_pehle[i][j];
            cout << endl;
        }
    }
    else if (!odd && even) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cout << r_pehle[i][j];
            cout << endl;
        }
    }

    else if (!odd && !even) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cout << r_pehle[i][j];
            cout << endl;
        }
    }

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