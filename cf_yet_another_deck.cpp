#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
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
	int n,q; cin>>n>>q;
	vll arr(n),col(51,0);
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		if(col[arr[i]]==0) col[arr[i]]=i+1;
	}

	for(int i=0;i<q;i++){
		int x; cin>>x;
		cout<<col[x]<<" ";
		for(int i=0;i<51;i++){
			if(col[i]!=0 && col[i]<col[x]) col[i]++;
		}
		col[x]=1;
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
