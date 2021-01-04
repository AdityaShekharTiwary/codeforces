#include<bits/stdc++.h>
using namespace std;
void solve(){
  int a,b;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int arr[100];
        int cnt_two=0,cnt_one=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==2) cnt_two++;
            else cnt_one++;
        }
        if(sum%2!=0) cout<<"NO"<<endl;
        else {
            if(cnt_two%2==0 && cnt_one%2==0) cout<<"YES"<<endl;
            else if(cnt_two%2!=0 && cnt_one%2==0 && cnt_one!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}
