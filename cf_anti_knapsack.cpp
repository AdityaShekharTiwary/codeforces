#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(ll i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define fo(i,s,e) for(ll i=s;i<=e;i++)
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
	int n,k; cin>>n>>k;
	vi arr;
	fo(i,k+1,n) arr.pb(i);
	int x=0;
	if((k-1)%2==0) x=(k-1)/2;
	else x=(k-1)/2+1;
	for(int i=k-1;i>=k-x;i--) arr.pb(i);
	cout<<arr.size()<<endl;
	f(i,0,arr.size())cout<<arr[i]<<" ";
	cout<<"\n";
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
