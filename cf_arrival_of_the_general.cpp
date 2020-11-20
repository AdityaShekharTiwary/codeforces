#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        //cout<<arr[i]<<" ";
    }
    int maxi=arr[0],mini=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
            maxi=arr[i];
        if(arr[i]<mini)
            mini=arr[i];
    }
    int posMax=0,posMin=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==maxi){
            posMax=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==mini)
        {
            posMin=i;
        }
    }

    if(maxi==arr[0] && mini==arr[n-1])
        cout<<0<<endl;
    else if(posMax<posMin)
        cout<<posMax+(n-1-posMin)<<endl;
    else
        cout<<posMax+(n-1-posMin)-1<<endl;

    return 0;
}
