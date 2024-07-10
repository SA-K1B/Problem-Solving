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
        return ((x%M + M)%M);
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
        res=mul(res,a);
    }
    b/=2;
    a=mul(a,a);
  }
  return res;
}
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
   if(a.first==b.first){
    return a.second<b.second;
   }
   return a.first<b.first;
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
  ll n,k;
   cin>>n>>k;
   vector <pair<ll,ll>> a;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb({x,0});
    ll c=0;
    while(x>0){
        x/=2;
        c++;
        a.pb({x,c});
    }
   }
   if(k==1){
    cout<<"0"<<endl;
    return;
   }
   sort(a.begin(),a.end(),cmp);
   ll cnt=1,ans=Max;
   ll cost=a[0].second;
   for(ll i=1;i<a.size();){
      if(a[i].first==a[i-1].first){
        cnt++;
        cost+=a[i].second;
        if(cnt==k){
            ans=min(ans,cost);
            while(a[i].first==a[i-1].first)
              i++;
            cnt=1;
            cost=a[i].second;
            i++;
        }
       else i++;
      }
      else{
        cnt=1;
        cost=a[i].second;
        i++;
      }
   }
   cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
