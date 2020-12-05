#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int ans=INT_MAX;
    for(int i=0;i<n;i++){
        long long int d=0;
        for(int j=0;j<n;j++){
            if(abs(arr[i]-arr[j])%2!=0)
                d++;
        }
        ans=min(ans,d);
    }
    cout<<ans<<endl;
    return 0;
}
