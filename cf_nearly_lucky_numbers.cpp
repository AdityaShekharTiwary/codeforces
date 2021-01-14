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

void check(ll ans){
    while(ans){
            int x=ans%10;
            if(x!=4 && x!=7){
                cout<<"NO"<<endl;
                exit;
            }
            ans=ans/10;
        }
        cout<<"YES"<<endl;
}
int main()
{
    fast;
    {
        int n,ans=0; cin>>n;
        while(n){
            int rem=n%10;
            if(rem==4 || rem==7) {
                ans++;
            }
            n=n/10;
        }
        if(ans==0) {
            cout<<"NO";
            exit;
        }
        check(ans);
    }
    return 0;
}
