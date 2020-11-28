#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=n/k*k+k/2;
        cout<<min(ans,n)<<endl;
    }
    return 0;
}
