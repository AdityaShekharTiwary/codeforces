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
        int n,d; cin>>n>>d;
        ll arr[1000];
        input_arr
        f(i,0,n){
               int flag=0;
               while(arr[i]>=d){
                    int mn=arr[i];
                    while(mn%10!=d){
                        mn--;
                    }
                    //cout<<mn<<endl;
                    arr[i]=arr[i]-mn;
               }
            if(arr[i]==0) flag=1;
            if(flag==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
	}

	return 0;
}

