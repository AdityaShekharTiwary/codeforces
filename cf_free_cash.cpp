#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<pair<int,int>,int> m;
    int ans=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        m[make_pair(x,y)]++;
        ans=max(ans,m[make_pair(x,y)]);
    }
    cout<<ans<<endl;
    return 0;
}
