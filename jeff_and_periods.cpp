#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
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


int difference(vector<int> array)
{
    if (array.size() == 1) return 0;
    int diff = array[1] - array[0];
    for (int i = 0; i < array.size() - 1; i++)
    {
        if (array[i] + diff == array[i + 1])
        {
            continue;
        }
        else
        {
            return -1;
        }
    }
    return diff;
}

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, vector<int>> m;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        if (m.find(x) != m.end())
        {
            m[x].pb(i);
        }
        else
        {
            vector<int> temp;
            temp.pb(i);
            m[x] = temp;
        }
    }
    int numbers = 0;
    vector<pair<int, int>> ans;
    for (auto i : m)
    {
        int dif = difference(i.second);
        if (dif != -1)
        {
            numbers++;
            ans.pb(make_pair(i.first, dif));
        }
    }
    sort(ans.begin(), ans.end());
    cout << numbers << "\n";
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << "\n";
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