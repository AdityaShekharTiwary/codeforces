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
	//test
	{
        string s;cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        vector<char>res;
        f(i,0,s.size()){
            if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i')
                continue;
            else{
                res.pb('.');
                res.pb(s[i]);
            }

        }
        f(i,0,res.size()) cout<<res[i];
        cout<<endl;
	}

	return 0;
}
