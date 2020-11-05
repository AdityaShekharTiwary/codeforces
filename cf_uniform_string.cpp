#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int i;
        for(i=0;i<n;i++){
            cout<<char ('a'+i%k);
        }
        cout<<endl;
    }
    return 0;
}
