#include<bits/stdc++.h>
using namespace std;
int n,a[300005],b[300005];
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    int cnt2=0,cnt3=0;
    while(n%2==0){
      n/=2;
      cnt2++;
    }
    while(n%3==0){
      n/=3;
      cnt3++;
    }
    if(n!=1){
        cout<<"-1"<<endl;
    }
    else if(cnt2>cnt3){
        cout<<"-1"<<endl;
    }
    else
        cout<<cnt3+(cnt3-cnt2)<<endl;
  }
  return 0;
}