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


void solve()
{
    deque<int> dq1, dq2;
    int n; cin >> n;
    int k1; cin >> k1;
    rep(i, 0, k1) {
        int x; cin >> x;
        dq1.push_front(x);
    }
    int k2; cin >> k2;
    rep(i, 0, k2) {
        int x; cin >> x;
        dq2.push_front(x);
    }

    int cnt = 0;
    while (!dq1.empty() && !dq2.empty()) {
        cnt++;
        int first = dq1.back();
        int sec = dq2.back();
        dq1.pop_back();
        dq2.pop_back();
        if (first > sec) {
            dq1.push_front(sec);
            dq1.push_front(first);
        }
        else {
            dq2.push_front(first);
            dq2.push_front(sec);
        }
        if (cnt == 1e5 + 7) {
            cout << -1 << nline;
            return ;
        }
    }

    cout << cnt << " ";
    if (dq1.empty()) cout << 2 << nline;
    else cout << 1 << nline;




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
