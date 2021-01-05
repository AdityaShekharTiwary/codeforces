#include<bits/stdc++.h>
#define ll long long int
#define l long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vl vector<l>
#define v vector<int>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        l x;
        cin>>n>>x;

        vl arr;
        l sum=0;
        for(l i=0;i<n;i++){
            l x; cin>>x;
            arr.push_back(x);
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]%x==0){
                for(int j=0;j<x;j++)
                    arr.push_back(arr[i]/x);
            }
            else break;
        }
        for(l i=0;i<arr.size();i++) sum+=arr[i];
        cout<<sum<<endl;
    }
    return 0;
}

