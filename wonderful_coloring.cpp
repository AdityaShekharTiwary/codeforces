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
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    map<int, int> hash, col, rem;
    rep(i, 0, n) {
        cin >> arr[i];
        hash[arr[i]]++;
        rem.insert({arr[i], 1});
    }
    debug(hash)


    // vector<int> rem(n + 1, 1);
    // vector<int> col(k + 1, 0);

    repp(i, 1, k) {
        col.insert({i, 0});
    }

    int lim = n / k;


    rep(i, 0, n) {
        if (hash[arr[i]] > 0 && rem[arr[i]] <= k) {
            if (col[rem[arr[i]]] >= lim) {
                // cout << "k";
                int j = 1;
                while (col[j] >= lim) {
                    // cout << "f";
                    j++;
                }
                if (j > k) {
                    cout << 0 << " ";
                    continue;
                }
                cout << j << " ";
                rem[arr[i]] = j + 1;
                col[j]++;
                hash[arr[i]]--;
                // col[rem[arr[i]]]++;
            }
            else {
                cout << rem[arr[i]] << " ";
                hash[arr[i]]--;
                col[rem[arr[i]]]++;
                rem[arr[i]]++;
            }

        }
        else if (rem[arr[i]] > k) cout << 0 << " ";
        debug(i)
        debug(hash)
        debug(rem)
        debug(col)
    }
    // debug(hash)
    // debug(rem)
    // debug(col)
    cout << nline;




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
