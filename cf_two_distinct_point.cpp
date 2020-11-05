#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,l2,r2;
        cin>>l>>r>>l2>>r2;
        if(l!=r2)
        {
            cout<<l<<" "<<r2<<endl;
        }
        else
        {
            cout<<r<<" "<<l2<<endl;
        }
    }
    return 0;
}
