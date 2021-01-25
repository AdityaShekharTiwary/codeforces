
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(n%2020&&n-2021>=0)
            n-=2021;
        while(n-2020>=0)
            n-=2020;
        if(n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
