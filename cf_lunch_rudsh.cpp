#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int f,t;
    int c_max=0,ans=0;
    while(n--)
    {
        cin>>f>>t;
        if(t<k){
            c_max=f;
        }
        else {
            c_max=f-(t-k);
        }
        ans=max(c_max,ans);
    }
    cout<<ans<<endl;
    return 0;
}
