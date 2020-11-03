#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0,ans=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            res++;
        }
    }
    if(res==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(arr[i+1]>arr[i])
            {
                ans++;
            }
            if(arr[i]==1)
            {
                cout<<ans<<" ";
                ans=1;
            }
        }
        cout<<arr[n-1];
    }
    cout<<endl;

    return 0;
}
