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
    string s, t; cin >> s >> t;
    int n = s.size(), m = t.size();
    int j = 0, i = 0;
    while (i < n) {
        if (s[i] == t[j]) j++;
        i++;
        //debug(j)
    }
    if (j == m && n > m) {
        cout << "automaton" << nline;
        return;
    }

    map<char, int> hash;
    rep(i, 0, n) {
        hash[s[i]]++;
    }

    rep(i, 0, m) hash[t[i]]--;

    // for (auto x : hash) cout << x.ss << " ";
    int flag = 2;
    for (auto x : hash) {
        if (x.ss > 0) flag = 0;
        else if (x.ss < 0) {
            flag = 1;
            break;
        }

    }

    debug(hash)
    debug(flag)

    if (flag == 0) cout << "both" << nline;
    else if (flag == 1) cout << "need tree" << nline;
    else if (flag == 2) cout << "array" << nline;


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