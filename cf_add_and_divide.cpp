#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define fo(i,s,e) for(int i=s;i<=e;i++)
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



void solve()
{
	ll a,b,cnt=0,c,ans;
        cin>>a>>b;
        c=a;
        if(b==1)
        {
            cnt++;
            b++;
        }
        int ct=0;
        while(a)
        {
            a=a/b;
            ct++;
        }
        ans=ct+cnt;
        for(int i=b;i<=(b+ct);i++)
        {
            a=c;
            int ct1=0;
            while(a)
            {
                a=a/i;
                ct1++;
            }
            ans=min(ans,ct1+i-b+cnt);
        }
        cout<<ans<<endl;
	


}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO

	test
	{
		solve();	
	}

	return 0;
}
