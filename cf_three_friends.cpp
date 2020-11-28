#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans=abs(a-b)+abs(b-c)+abs(a-c)-4;
        if(ans<0)
            cout<<0<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
