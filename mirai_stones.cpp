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

const ll mod = 1e9 + 7;

void solve()
{
    ll n; cin >> n;
    vector<ll> arr(n);
    f(i, 0, n) cin >> arr[i];
    vector<ll> dummy = arr;
    sort(dummy.begin(), dummy.end());

    vector<ll> pre_arr, pre_dummy;

    pre_arr.pb(0);
    pre_dummy.pb(0);

    ll sum = 0;
    for (auto x : arr) {
        sum += x;
        pre_arr.pb(sum);
    }
    sum = 0;
    for (auto x : dummy) {
        sum += x;
        pre_dummy.pb(sum);
    }

    debug(pre_dummy);
    debug(pre_arr);
    ll m; cin >> m;

    while (m--) {

        ll task, l, r; cin >> task >> l >> r;
        sum = 0;

        if (task == 1) {
            sum = pre_arr[r] - pre_arr[l - 1];
            cout << sum << endl;
        }


        else {
            sum = pre_dummy[r] - pre_dummy[l - 1];
            cout << sum << endl;
        }
    }



}



int main()
{
    fast();


    //test
    {
        solve();
    }

    return 0;
}