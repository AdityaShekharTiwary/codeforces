#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back

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
    ll p, q, l, r, i, a, b, j, k;
    cin >> p >> q >> l >> r;
    vector<pair<ll, ll>> v1, v2;

    for (i = 0; i < p; i++)
    {
        cin >> a >> b;
        v1.push_back(
        { a, b });
    }

    for (i = 0; i < q; i++)
    {
        cin >> a >> b;
        v2.push_back(
        { a, b });
    }
    set<ll> s;

    for (i = l; i <= r; i++)
    {
        for (j = 0; j < p; j++)
        {
            ll x = v1[j].first;
            ll y = v1[j].second;

            for (k = 0; k < q; k++)
            {
                ll pp = v2[k].first;
                ll qq = v2[k].second;

                if ((i + pp > y || i + qq < x))
                {
                    int c;
                }
                else
                {
                    s.insert(i);
                }
            }
        }
    }
    cout << s.size();

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