#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		string a;cin>>a;
		int len=a.size();
		for(int i=0;i<len;i++)
		{
			if(i%2==0)
			{
				if(a[i]!='a') a[i]='a';
				else a[i]='b';
			}
			if(i%2)
			{
				if(a[i]!='z') a[i]='z';
				else a[i]='y';
			}
		}
		cout<<a<<endl;
	}
	return 0;
}
