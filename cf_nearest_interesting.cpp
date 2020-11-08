#include <bits/stdc++.h>
using namespace std;
int find_sum(int q){
    int sum=0,r=0;
    while(q/10!=0)
  {
      r=q%10;//1
      sum=sum+r;//0+1
      q=q/10;//12

  }
  sum=sum+q;
  return sum;
}
int main() {
  int a,n;
  cin>>a;
  while(1){
  int sum=find_sum(a);
  if(sum%4==0)
  {
      cout<<a<<endl;
      break;
  }
  else
    a++;

  }
  }
