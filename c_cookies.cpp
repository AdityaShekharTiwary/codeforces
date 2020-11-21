#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ce=0,co=0;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            ce++;
        else if(arr[i]%2!=0)
            co++;
    }
    if(co%2==0)
        cout<<ce<<endl;
    else if(co%2!=0)
    {
        if(co==1)
            cout<<1<<endl;
        else if(co>1)
        {
            cout<<ce+co<<endl;
        }
    }
    return 0;
}
