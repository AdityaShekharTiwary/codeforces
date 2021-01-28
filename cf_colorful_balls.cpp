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

void solve()
{
    int hel;

}

int main()
{
	fast
	test
	{
        int n,curr=1,ans=INT_MIN; cin>>n;
        int arr[100];
        f(i,0,n) cin>>arr[i];
        if(n==1) cout<<1<<endl;
        else{
            f(i,0,n-1){
                if(arr[i]==arr[i+1]) curr++;
                else curr=1;
                ans=max(curr,ans);
            }
            cout<<ans<<endl;
        }
	}

	return 0;
}

