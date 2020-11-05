#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int minOperation=0;
    cin>>n>>m;
    if(m%n!=0)
        cout<<-1<<endl;
    else
    {
        int q=m/n;
        while(q%2==0)
        {
            q=q/2;
            minOperation++;
        }
        while(q%3==0)
        {
            q=q/3;
            minOperation++;
        }
        if(q==1)
            cout<<minOperation<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
