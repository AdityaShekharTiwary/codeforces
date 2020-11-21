#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    int arr[100];
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1' && b[i]=='0')
            arr[i]=1;
        else if(a[i]=='0' && b[i]=='1')
            arr[i]=1;
        else
            arr[i]=0;

        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}
