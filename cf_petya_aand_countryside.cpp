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
	int n; cin>>n;
	vll arr;
	input_arr
    int res=0;
    for(int i=0;i<n;i++){
    	int cnt=1;
    	int curr=arr[i];
    	for(int j=i-1;j>=0;j--){
    		if(arr[j]<=curr) cnt++;
    		else break;
    		curr=arr[j];
    	}

    	for(int j=i+1;j<n;j++){
    		if(arr[j]<=curr) cnt++;
    		else break;
    		curr=arr[j];
    	}
    	res=max(res,curr);
    }
    cout<<res<<endl;

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
