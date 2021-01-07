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
    v res;
    string s;
    cin>>s;
    int i=0;
    while(i<s.size()){
        if(s[i]=='.') {
            res.push_back(0);
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            res.push_back(1);
            i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='-') {
            res.push_back(2);
            i+=2;
        }
    }
    for(int i=0;i<res.size();i++) cout<<res[i];
    return 0;
}

