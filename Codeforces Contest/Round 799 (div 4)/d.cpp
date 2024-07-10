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
void solve()
{
  ll h,m,x;
   scanf("%lld:%lld %lld",&h,&m,&x);
   vector<pair<ll,ll>> v;
   v.pb({0,0});
   v.pb({1,10});
   v.pb({2,20});
   v.pb({3,30});
   v.pb({4,40});
   v.pb({5,50});
   v.pb({10,1});
   v.pb({11,11});
   v.pb({12,21});
   v.pb({13,31});
   v.pb({14,41});
   v.pb({15,51});
   v.pb({20,02});
   v.pb({21,12});
   v.pb({22,22});
   v.pb({23,32});
   ll ans=0;
   for(ll i=0;i<16;i++){
    if(v[i].first==h&&v[i].second==m)
        ans++;
   }
   db t3=((x*1.0)/60.0);
   db c1=24.0/t3;
   ll c=c1;
   ll t1=h,t2=m;
   c--;
   while(1){
   //     cout<<h<<endl;
   //cout<<h<<' '<<m<<endl;
      m+=x;
      if(m>=60){
        h+=m/60;
        if(h>=24)
            h=h%24;
        m=m%60;
      }
      if(h==t1&&m==t2)
        break;
      for(ll i=0;i<16;i++){
    if(v[i].first==h&&v[i].second==m)
        ans++;
     }
     c--;
   }
   cout<<ans<<endl;
}
int main()
{
    freopen("i.txt","r",stdin);
    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

