#include<bits/stdc++.h>
#define ll long long int
//#define l long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vl vector<l>
#define v vector<int>
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
//#define m map<int,int>
#define mll map<ll,ll>
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fast;
    test
    {
        int n,m; cin>>n>>m;
        string s; cin>>s;
        set<int>p;
        while(m--){
            int num=0;
            int l,r; cin>>l>>r;
            p.insert(0);
            for(int i=0;i<l-1;i++){
                if(s[i]=='+') {
                    num++;
                    p.insert(num);
                }
                else if(s[i]=='-') {
                    num--;
                    p.insert(num);
                }
        }

        for(int i=r;i<s.size();i++){
                if(s[i]=='+') {
                    num++;
                    p.insert(num);
                }
                else if(s[i]=='-') {
                    num--;
                    p.insert(num);
                }
        }

        cout<<p.size()<<endl;
        p.clear();
    }
    }
    return 0;
}

