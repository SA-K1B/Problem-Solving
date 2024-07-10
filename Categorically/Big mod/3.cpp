#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;
ll pw(ll x){
    ll res;
     if(x==0)
        return 1;
     else if(x%2)
        res=(2*pw(x-1))%mod;
     else{
        res=pw(x/2);
        res=(res*res)%mod;
     }
     return res;
}
int main()
{
   freopen("i.txt","r",stdin);
   freopen("o.txt","w",stdout);
   ll t,n;
   cin>>t;
   ll c=1;
   while(t--){
    cin>>n;
    ll k=pw(n-1);
   // cout<<k<<endl;
    ll ans=(n*k)%mod;
    cout<<"Case #"<<c<<": ";
    cout<<ans<<endl;
    c++;
   }
}
