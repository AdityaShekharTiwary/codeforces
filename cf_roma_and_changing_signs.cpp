#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,sum=0;
    cin>>n>>k;
    int mini = INT_MAX ;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x < 0 && k != 0)
        {
            x *= -1;
            k--;
        }
        sum += x;
        mini = min(mini, x);
    }
    if (k > 0)
    {
        sum += (mini * -1);
        if (k % 2 != 0)
        {
            mini *= -1;
        }
        sum += mini;
    }
    cout<<(sum)<<endl;
    return 0;
}
