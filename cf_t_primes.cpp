#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(ll n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    ll k=sqrt(n);
    for(int j=3;j<k;j+=2){
        if(n%j==0) return false;
    }
    return true;
}

int main()
{
    ll n;
    cin>>n;
    ll arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ll sqr=sqrt(arr[i]);
        if(sqr*sqr==arr[i] && isPrime(sqr)==true){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
