#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define fo(i,s,e) for(int i=s;i<=e;i++)
#define mii map<int,int>
#define mp make_pair
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void fast()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO
	cout.tie(NULL);
}

const int N = 55;
int a[N];

void solve()
 {
    int n; cin >> n;
    int ans = 0;
    cin >> a[1];
    f(i, 2, n) {
        cin >> a[i];
        int lst = a[i - 1], nw = a[i];
        while (nw * 2 < lst) nw *= 2, ans++;
        while (nw > lst * 2) lst *= 2, ans++;
    }
    cout << ans << endl;
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
