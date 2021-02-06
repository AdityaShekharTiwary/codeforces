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
        ll n,k; cin>>n>>k;
        vi arr(n);
        input_arr
        int res=-1;

        if(k>10000){
            cout<<res<<endl;
            continue;
        }
        while(k--){
            res=-1;
            f(i,0,n-1){
                if(arr[i]<arr[i+1]){
                arr[i]+=1;
                res=i+1;
                break;
                }
            }
        }
        cout<<res<<endl;
	}
	return 0;
}

