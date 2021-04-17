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
	
	


}

int main()
{
	fast();

	test
	{
		int n;cin>>n;
	vll arr(n);
	input_arr
	vll odd,even;
	int j=0,k=0;
	f(i,0,n){
		if(arr[i]%2==0){
			even.pb(arr[i]);
		}
		else {
			odd.pb(arr[i]);
		}
	}

	vll res;

		f(i,0,odd.size()){
			res.pb(odd[i]);
		}

		f(i,0,even.size()){
			res.pb(even[i]);
		}


	f(i,0,res.size()) cout<<res[i]<<" ";
	cout<<"\n";
	}


	return 0;
}
