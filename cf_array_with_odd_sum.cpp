#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even=0,odd=0;
        int v[2000];
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0)
                even++;
            else
                odd++;
        }
        if((odd==n && n%2==0) || odd==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}
