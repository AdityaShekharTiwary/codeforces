#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>s>>n;
    pair<int,int> p[1000];
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        if(p[i].first>=s){
            return cout<<"NO",0;
        }
        s+=p[i].second;
    }
    cout<<"YES"<<endl;
}
