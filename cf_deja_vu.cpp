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
	string s; cin>>s;
	int n=s.size();
	int cnt=0;
	f(i,0,n) {
		if(s[i]=='a') cnt++;
	}
	if(cnt==n){

		 cout<<"NO\n";
		 return ;
	}
	cout<<"YES\n";
	int k=0,x=0;

	f(i,0,n) {
		if(s[i]=='a') x++;
		else break;
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]=='a') k++;
		else break;
	}

	if(k>=x) cout<<s<<'a'<<endl;
	else cout<<'a'<<s<<endl;

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
