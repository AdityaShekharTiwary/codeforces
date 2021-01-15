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
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void dolve(){
    int z,x;
}
int main()
{
    fast;
    test
    {
        int n,d; cin>>n>>d;
        vector<int> arr(n);
        int flag=0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]>d) flag=1;
        }
        sort(arr.begin(),arr.end());
        if(arr[0]+arr[1]<=d) cout<<"YES"<<endl;
        else if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
