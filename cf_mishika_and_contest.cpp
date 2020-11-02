#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
            count++;
        else
            break;
    }
    if(count<n)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<=k)
                count++;
            else
                break;
        }
    }
        cout<<count<<endl;
    return 0;
}
