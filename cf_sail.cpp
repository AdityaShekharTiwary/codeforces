#include<iostream>
using namespace std;
int main()
{
    int t,a,b,x,y,i;
    char c;
    cin>>t>>a>>b>>x>>y;
    for(i=1;i<=t;i++)
    {
        cin>>c;
        if(c=='N' && b<y)b++;
        else if(c=='S' && b>y)b--;
        else if(c=='E' && a<x)a++;
        else if(c=='W' && a>x)a--;
        if(a==x && b==y)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}
