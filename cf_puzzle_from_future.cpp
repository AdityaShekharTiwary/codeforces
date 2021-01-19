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
   int x;

}
int main()
{
	fast
	test
	{
        int n; cin>>n;
        string s; cin>>s;
        vector<int>t;
        vector<int>d;
        t.pb(1);
        if(s[0]=='0') d.pb(1);
        else d.pb(2);
        f(i,1,n){
            if(s[i]=='0' && d[i-1]==1){
                t.pb(0);
                d.pb(0);
            }

            else if(s[i]=='0' && d[i-1]==2){
                t.pb(1);
                d.pb(1);
            }

            else if(s[i]=='0' && d[i-1]==0){
                t.pb(1);
                d.pb(1);
            }

            else if(s[i]=='1' && d[i-1]==0){
                t.pb(1);
                d.pb(2);
            }

            else if(s[i]=='1' && d[i-1]==1){
                t.pb(1);
                d.pb(2);
            }

            else if(s[i]=='1' && d[i-1]==2){
                t.pb(0);
                d.pb(1);
            }
        }
        f(i,0,n) cout<<t[i];
        cout<<endl;
	}

	return 0;
}
