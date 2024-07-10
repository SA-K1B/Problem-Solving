#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
ll ncr(ll a,ll b){
   ll ans=1;
   ll s=1;
   while(s<=b){
    ans*=(a-s+1);
    ans/=s;
    s++;
   }
  // cout<<ans<<endl;
   return ans;
}
int main()
{
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a2,n,m;
    cin>>n>>m;
    ll x=n/m;
    ll rx=n%m;
    ll a1=ncr(x,2);
    if(rx>0){
         a2=ncr(x+1,2);
    }
   // cout<<a1<<' '<<a2<<endl;
    ll mn=(m-rx)*a1+(rx)*a2;
    ll a3=ncr(n-(m-1),2);
    cout<<mn<<' '<<a3<<endl;
    return 0;
}

