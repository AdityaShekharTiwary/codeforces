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


void second(vector<int> &arr, int n) {
    repp(i, 1, n) cout << i << " ";
    cout << n + 1 << nline;
}

void first(vector<int> &arr, int n) {
    cout << n + 1 << " ";
    repp(i, 1, n) cout << i << " ";
    cout << nline;
}

void solve(vector<int> &arr, int n)
{

    if (arr[0] == 1) first(arr, n);
    else if (arr[n - 1] == 0) second(arr, n);
    else {
        int idx = -2;
        rep(i, 0, n - 1) {
            if (arr[i] == 0 && arr[i + 1] == 1) {
                idx = i + 1;
                break;
            }
        }
        if (idx == -1) cout << -1 << nline;
        else {
            repp(i, 1, idx) cout << i << " ";
            cout << n + 1 << " ";
            repp(i, idx + 1, n) cout << i << " ";
            cout << nline;
        }
    }

}


int main()
{
    fast();

    test
    {
        int n; cin >> n;
        vector<int> arr(n);
        rep(i, 0, n) cin >> arr[i];
        solve(arr, n);
    }



    return 0;
}
