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
        string s,t; cin>>s>>t;
        int n=s.size(),x=t.size();
        if(lexicographical_compare(s,s+n,t,t+x)){
            cout<<1<<endl;
        }
        else if (lexicographical_compare(t,t+size(),s,s+s.size())) cout<<1<<endl;
        else cou<<0<<endl;
	}

	return 0;
}


