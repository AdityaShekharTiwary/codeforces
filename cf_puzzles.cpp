#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define mi map<int,int>
#define mll map<ll,ll>
#define pb push_back
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main()
{
	fast_IO
	//test
	{
        int n,m; cin>>n>>m;
        vi arr(m);
        input_arr
        sort(arr.begin(),arr.end());
        int ans=0;
        f(i,n-1,m) ans=min(ans,arr[i]-arr[i-n+1]);
        cout<<ans;

	}

	return 0;
}


