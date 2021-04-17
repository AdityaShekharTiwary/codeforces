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
		int n; cin>>n;
	string s; cin>>s;
	int a=0,b=0;
	f(i,0,n){
		if(s[i]=='T') a++;
		else b++;
	}
	int cnt=0;
	if((2*b!=a) || (s[0]!='T' && s[n-1]!='T')) {
		cout<<"NO\n";
	}
	else {
		int i=0;
		for(i=0;i<n;i++){
			if(s[i]=='T') cnt++;
			else cnt--;
			if(cnt<0) {
				cout<<"NO\n";
				break;
			}
			else if(cnt>n/3) {
				cout<<"NO\n";
				break;
			}
		}
		if(i==n)cout<<"YES\n";
	}


	}

	vll res;



	return 0;
}
