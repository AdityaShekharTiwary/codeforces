#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[t.size()-i-1])
           return cout<<"NO",0;
    }
    cout<<"YES"<<endl;
}
