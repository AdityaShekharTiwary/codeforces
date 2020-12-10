#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,x,ans;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		ans=ans+(x/100);
	}
	printf("%.12f",(ans/n)*100);
    return 0;
}
