#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        while(n%2==0)
            n/=2;
        //cout<<n;
        if(n>1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
