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
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main()
{
	fast_IO
	//test
	{
        int n; cin>>n;
        int x1,y1,z1;
        int sumx=0,sumy=0,sumz=0;
        for(int i=0;i<n;i++){
            cin>>x1>>y1>>z1;
            sumx+=x1;
            sumy+=y1;
            sumz+=z1;
        }
        if(sumx==0 && sumy==0 && sumz==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

	}

	return 0;
}

