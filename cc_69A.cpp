#include<bits/stdc++.h>
#define ll long long int
#define l long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vl vector<l>
#define v vector<int>
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define m map<int,int>
#define mll map<ll,ll>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    int i=0,j=0,k=0;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        i+=x;
        j+=y;
        k+=z;
    }
    if(i==0 && j==0 && k==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

