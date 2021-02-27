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
	string s; cin>>s;
	vi arr;
	int n=s.size();
	f(i,0,n) {
		if(s[i]=='1') arr.pb(1);
		else if(s[i]=='2') arr.pb(2);
		else if(s[i]=='3') arr.pb(3);
	}
	sort(arr.begin(),arr.end());
	f(i,0,arr.size()-1){
		cout<<arr[i]<<"+";
	}
	cout<<arr[arr.size()-1];
	  
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
