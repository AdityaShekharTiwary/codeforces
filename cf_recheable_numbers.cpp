#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin>>n;
    while(n/10>0)
    {
        n++;
        count++;

        while(n%10==0)
        {
            n=n/10;
        }
    }
    cout<<count+9<<endl;
    return 0;
}
