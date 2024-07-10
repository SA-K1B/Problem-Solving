#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 1000000000000000000
#define Min -1000000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
ll M=1000000007;
ll mod(ll x){
        return (x%M);
    }
ll add(ll a, ll b){
        return mod(mod(a)+mod(b));
    }
ll mul(ll a, ll b){
        return mod(mod(a)*mod(b));
    }
ll powr(ll a,ll b){
   if(b==0)
      return 1;
   if(b==1)
      return a;
   ll res=1;
   while(b>0){
    if(b&1){
        res*=a;
    }
    b/=2;
    a*=a;
  }
  return res;
}
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
   return a.second<b.second;
}
ll is[1000000];
vector <ll> primes;
void primegen(){
    ll n,i,j,k,x,mx=1000000;
    primes.push_back(2);
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0){
         for(ll j=i*i;j<=mx;j+=2*i){
          is[j]=1;
         }
       }
    }
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0)
            primes.push_back(i);
    }
}
ll ncr(ll x,ll y){
   ll ans=1,s=1;
    while(s<=y){
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
vector <ll> v;
vector <ll> pre;
void solve()
{
  ll n,x;
   cin>>n>>x;
   if(n==1){
    cout<<x<<endl;
    return;
   }
   if(n==2){
    cout<<2*x<<endl;
    return;
   }
   ll k=pre[n-3];
   x*=2;
   ll a=mul(x,k);
   ll ans=add(a,x);
   cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    v.pb(1);
    for(int i=1;i<=1000003;i++){
     ll k=mul(2,v[i-1]);
     v.pb(k);
    }
    pre.pb(1);
    for(int i=1;i<=1000003;i++){
     ll k=add(pre[i-1],v[i]);
     pre.pb(k);
    }
    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
