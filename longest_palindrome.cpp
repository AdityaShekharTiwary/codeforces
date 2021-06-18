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
    string s[102];
    set<string> dict;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        dict.insert(s[i]);
    }
    string mid = "";
    vector<string> left, right;
    for (int i = 0; i < n; i++) {
        string temp = s[i];
        reverse(temp.begin(), temp.end());
        if (temp == s[i]) mid = temp;
        else if (dict.find(temp) != dict.end()) {
            left.pb(s[i]);
            right.pb(temp);
            dict.erase(s[i]);
            dict.erase(temp);
        }
    }

    cout << left.size()*m * 2 + mid.size() << endl;
    debug(right)
    for (auto x : left) cout << x;
    cout << mid;
    reverse(right.begin(), right.end());
    for (auto x : right)cout << x;
    cout << endl;



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