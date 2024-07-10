#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
ll powm(ll a,ll b){
   ll res=1;
   for(ll i=1;i<=b;i++){
    res=(res*a)%mod;
   }
   //cout<<res<<endl;
  return res;
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
   ll ans=powm(10,n)-(powm(9,n)+powm(9,n)-powm(8,n));
    ans%=mod;
    ans=(ans+mod)%mod;
    cout<<ans<<endl;
    return 0;
}

