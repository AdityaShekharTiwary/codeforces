#include<bits/stdc++.h>
using namespace std;
#define MAX 102
#define ms(s, n) memset(s, n, sizeof(s))
int arr[MAX][MAX];
int main()
{
    int n,k;
    cin>>n>>k;
    ms(arr,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                arr[i][j]=k;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i][0];
        for(int j=1;j<n;j++){
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
