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
    string s; cin >> s;
    ll nb, ns, nc, pb, ps, pc, rr, ans = 0, i; cin >> nb >> ns >> nc >> pb >> ps >> pc >> rr;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B') cnt1++;
        if (s[i] == 'S') cnt2++;
        if (s[i] == 'C') cnt3++;
    }
    ll l = 0, r = 1e15;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll x = mid * cnt1, y = mid * cnt2, z = mid * cnt3;
        x = max(x - nb, 0ll);
        y = max(y - ns, 0ll);
        z = max(z - nc, 0ll);
        x *= pb, y *= ps, z *= pc;
        if (x + y + z <= rr) ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << ans;

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
