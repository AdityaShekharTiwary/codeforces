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
    int n; cin >> n;
    vector<ll> arr(n), f, s;
    ll sum = 0;
    rep(i, 0, n) {
        cin >> arr[i];
        if (arr[i] > 0) f.pb(arr[i]);
        else s.pb(arr[i]);
        sum += arr[i];
    }

    if (sum > 0 ) {
        cout << "first\n";
        return;
    }
    else if (sum < 0) {
        cout << "second\n";
        return;
    }
    bool flag = false;
    if (sum == 0) {
        rep(i, 0, max(f.size(), s.size())) {
            if (f[i] > abs(s[i])) {
                cout << "first\n";
                flag = true;
                return;
            }
            else if (f[i] < abs(s[i])) {
                cout << "second\n";
                flag = true;
                return;
            }
        }
        if (!flag && f.size() != s.size()) {
            if (f.size() > s.size()) {
                cout << "first\n";
                flag = true;
                return;
            }
            else {
                cout << "second\n";
                flag = true;
                return;
            }
        }
        if (!flag && f.size() == s.size()) {
            if (arr[n - 1] > 0) cout << "first\n";
            else cout << "second\n";
        }
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


