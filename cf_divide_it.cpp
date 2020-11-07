#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,count=0;
        cin>>n;
        while(n>1)
        {
            if(n%5==0)
            {
                n=4*n/5;
                count++;
            }
            else if(n%3==0)
            {
                n=2*n/3;
                count++;
            }
            else if(n%2==0)
            {
                n=n/2;
                count++;
            }
            else
            {
                count=-1;
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
