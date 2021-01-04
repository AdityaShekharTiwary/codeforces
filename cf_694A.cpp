
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        int a=w*h,p=1;
        while(a%2==0 && p<=n){
            a/=2;
            p*=2;
        }
        if(p>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
