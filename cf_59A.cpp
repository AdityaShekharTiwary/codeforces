#include<bits/stdc++.h>
#define ll long long int
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
     string s;
    int up = 0, down = 0;
    cin >> s;
    int l = s.length();

    for( int i = 0; i < l; ++i ){
         if( s[i] < 92 ) ++up;
         else if ( s[i] > 92 ) ++down;
    }

    for( int i = 0; i < l; ++i ){
         if( up <= down ){
             if( s[i] < 92 ) s[i] += 32;
         }else if( s[i] > 92 ) s[i] -= 32;
    }
    cout << s;
    return 0;
}

