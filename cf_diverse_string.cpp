#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int flag=0;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]+1!=s[i+1])
            {
                flag=1;
            }
            else
                continue;
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
