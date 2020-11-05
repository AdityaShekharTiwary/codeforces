#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        if(2*a<=b)
            cout<<n*a<<endl;
        else
        {
            long long int cost=(n/2)*b+(n%2)*a;
            cout<<cost<<endl;
        }

    }
    return 0;
}
