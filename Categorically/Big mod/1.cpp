#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll bigmod(ll b,ll p,ll m){
    ll res;
    if(p==0){
        return 1;
    }
    else if(p%2){
        res=b*bigmod(b,p-1,m)%m;
    }
    else{
        res=bigmod(b,p/2,m);
        res=(res*res)%m;
    }
    return res;
}
int main()
{
  ll b,p,m;
  while(cin>>b>>p>>m){
    ll ans=bigmod(b,p,m);
    cout<<ans<<endl;
  }


}
