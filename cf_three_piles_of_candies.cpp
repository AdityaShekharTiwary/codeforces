#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2==0)
            cout<<(a+b+c)/2<<endl;
        else if((a+b+c)%2!=0)
            cout<<(a+b+c-1)/2<<endl;
    }
    return 0;
}
