#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c,q;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++){
        cin>>c>>q;
        v.push_back(make_pair(c,q));
    }
    sort(v.begin(),v.end());
    int flag=0;
    for(int i=1;i<n;i++){
        if(v[i].first>v[i-1].first){
            if(v[i].second<v[i-1].second)
                return cout<<"Happy Alex",0;
        }
    }
    cout<<"Poor Alex"<<endl;
}
