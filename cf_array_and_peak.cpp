#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
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
	int n,k; cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++) arr[i]=i;
	int j=n;
	if(k==0) {
		for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
	}

	else if(n==k || n<3 || (n+1)/2<=k)  cout<<-1;

	else{
		while(k--){
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j-=2;
		}
		for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
	}

	cout<<endl;

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
