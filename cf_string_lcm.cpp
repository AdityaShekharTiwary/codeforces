#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		string x1="",y1="";
		int x=s1.size(),y=s2.size(),lcm;
		lcm=(x*y)/(__gcd(x,y));
		x=lcm/x;
		y=lcm/y;
		for(int j=0; j<x; j++)
		{
			x1=x1+s1;
		}
		for(int j=0; j<y; j++)
		{
			y1=y1+s2;
		}
		if(x1==y1)
		{
			cout<<x1<<"\n";
		}
		else
		{
			cout<<"-1\n";
		}
	}
	return 0;
}
