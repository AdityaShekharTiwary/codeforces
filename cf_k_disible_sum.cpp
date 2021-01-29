#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define v vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define m map<int,int>
#define mll map<ll,ll>
#define pb push_back
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main()
{
	fast
	test
	{
        ll n,k; cin>>n>>k;
        if(n>k && n!=1 && k!=1){
            int r=n%k;
            //cout<<r<<endl;
            cout<<((n+(k-r))/n)+1<<endl;
        }
        else if(n<k && n!=1 && k!=1) cout<<k/n+1<<endl;
        else if(n==k || k==1) cout<<1<<endl;
        else if(n==1) cout<<k<<endl;
	}

	return 0;
}
