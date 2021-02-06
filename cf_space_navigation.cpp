#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define mi map<int,int>
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
        int x,y; cin>>x>>y;
        string s; cin>>s;

        int u=0,d=0,l=0,r=0;
        int n=s.size();
        f(i,0,n){
            if(s[i]=='R') r++;
            if(s[i]=='L') l++;
            if(s[i]=='U') u++;
            if(s[i]=='D') d++;
        }
        int flag=0;
        if(x>=0 && y>=0){
            if(r>=x && u>=y) flag=1;
        }

        if(x>=0 && y<=0){
            if(r>=x && d>=abs(y)) flag=1;
        }

        if(x<=0 && y>=0){
            if(l>=abs(x) && u>=y) flag=1;
        }

        if(x<=0 && y<=0){
            if(l>=abs(x) && d>=abs(y))flag=1;
        }

        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}

	return 0;
}

