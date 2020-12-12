#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i=1;
    while(m>=i){
        m-=i;
        i++;
        if(i==n+1) i=1;
    }
    cout<<m<<endl;
    return 0;
}
