#include<bits/stdc++.h>
using namespace std;
int n,cnt;
string s;
int main()
{
	cin>>n>>s;
	for(int i=0;i<s.size();i+=cnt+1,cnt++) cout<<s[i];
	return 0;
}

