#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define fo(i,s,e) for(int i=s;i<=e;i++)
#define mi map<int,int>
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


void solve()
{
	 ll n;cin>>n;
     unordered_map<ll,ll>mp;
     ll arr[n];
     for(ll i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]%3]++;
    }
    
    ll res = 0;
            
    while(min(mp[0], min(mp[1], mp[2]))!=n/3){
        for(int i=0; i<3; i++){
            if(mp[i] > n/3){
                res++;
                mp[i]--;
                mp[(i+1)%3]++;
            }
        }
    }
    cout << res << endl;
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
