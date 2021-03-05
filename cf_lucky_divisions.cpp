#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define f2(i,s,e) for(int i=s;i<=e;i++)
#define mi map<int,int>
#define mp make_pair
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define MAXN 1000001
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
	int n; cin>>n;
	int arr[10]={4,7,47,74,447,474,477,774,747,744};
	int cnt=0;
	f(i,0,10){
		if(n==arr[i] || n%arr[i]==0) {cout<<"YES";return;}
		else cnt++;
	}
	if(cnt==10) cout<<"NO";

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
