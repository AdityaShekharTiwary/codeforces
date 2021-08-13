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



void solve()
{
    ll n; cin >> n;
    vector<ll> arr(n);
    set<ll>st;
    rep(i, 0, n) {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    if (st.size() == 1) {
        cout << 0 << " ";
        if (n == 2) cout << 1;
        else {
            ll res = n * (n - 1) / 2;
            cout << res;
        }
        return;
    }
    sort(arr.begin(), arr.end());
    map<ll, ll> hash;
    rep(i, 0, n) hash[arr[i]]++;
    debug(hash)
    cout << arr[n - 1] - arr[0] << " ";
    cout << hash[arr[0]]*hash[arr[n - 1]];
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
