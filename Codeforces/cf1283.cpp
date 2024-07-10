#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
    int m1,h,m,ans;
    cin>>h>>m;
    int h1=24-h;
    if(m>0){
        h1--;
        m1=60-m;
        ans=(h1*60)+m1;
    }
    else {
        ans=h1*60;
    }
    cout<<ans<<endl;
  }
  return 0;

}
