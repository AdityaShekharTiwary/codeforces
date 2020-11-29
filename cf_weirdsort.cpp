#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        bool flag=1;
        cin>>n>>m;
        int a[110],p[110],b[110];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        for(int i=1;i<=m;i++){
            cin>>p[i];
        }
        sort(b+1,b+1+n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[p[j]+1]<a[p[j]])
                    swap(a[p[j]+1],a[p[j]]);
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i]!=b[i]){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
