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
    int n; cin >> n;
    vector<int> ar(n);
    f(i, 0, n) cin >> ar[i];
    int min = INT_MAX, minPos = 0;
    int max = -1, maxPos = 0;
    bool flag = true;


    for (int i = 1; i < n; i++) {

        if (ar[i - 1] > ar[i] &&  flag) {

            if (ar[i] < min) {
                min = ar[i];
                minPos = i;
            }
            if (ar[i - 1] > max) {
                max = ar[i - 1];
                maxPos = i - 1;
            }
        }

        if (ar[i] > min && ar[i] < max) {
            flag = false;
        }

    }

    if (maxPos != 0 && ar[maxPos - 1] > min  ) {
        flag = false;
    }




    if (flag) {
        cout << "yes" << endl;
        cout << maxPos + 1 << " " << minPos + 1;
    }
    else {
        cout << "no" << endl;
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