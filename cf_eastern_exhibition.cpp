#include<bits/stdc++.h>
using namespace std;
#define int long long
#define X first
#define Y second  

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--)
    {
    	int n;
    	cin>>n;
    	int x[n], y[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>x[i]>>y[i];
    	}
    	sort(x,x+n);
    	sort(y,y+n);
    	int resx = x[(n+2)/2-1]-x[(n+1)/2-1]+1;
    	int resy = y[(n+2)/2-1]-y[(n+1)/2-1]+1;
    	cout<<resy*resx<<"\n";
    }
    return 0;
}