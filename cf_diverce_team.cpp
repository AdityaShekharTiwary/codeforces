#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[100];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    set<int>s;
    for(int i=1;i<=n;i++)
    {
        s.insert(arr[i]);
    }
    if(s.size()<k)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
