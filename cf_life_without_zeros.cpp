#include<bits/stdc++.h>
using namespace std;
long long remZ(long long a)
{
    long long res=0, res2=0;
    while (a>0)
    {
        if (a%10 != 0) res = res*10+(a%10);
        a/=10;
    }
    while (res>0)
    {
        res2 = res2*10+(res%10);
        res/=10;
    }
    return res2;
}

int main()
{
    long long a, b, c, a1, b1, c2;
    cin>>a>>b;
    c = a+b;
    a1=remZ(a);
    b1 = remZ(b);
    c2 = remZ(c);
    //cout<<a1<<" "<<b1<<" "<<c<<" "<<c2<<endl;
    if (c2==a1+b1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
