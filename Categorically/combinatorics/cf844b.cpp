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
    //cout<<"2"<<endl;
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0)
            //cout<<i<<endl;
            primes.push_back(i);
    }
}
ll ncr(ll x,ll y){
   ll ans=1,s=1;
    while(s<=y){
         //   cout<<ans<<endl;
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
ll powr(ll a,ll b){
   if(b==0)
      return 1;
   if(b==1)
      return a;
   ll res=1;
   while(b>0){
    if(b&1){
        res=res*a;
    }
    b/=2;
    a=a*a;
  }
  return res;
}
void solve()
{
  ll n,m;
   cin>>n>>m;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  ll  a[55][55];
  for(ll i=0;i<n;i++){
     for(ll j=0;j<m;j++){
      cin>>a[i][j];
     }
  }
  ll cnt1=0;
  ll cnt0=0;
  vector <pair<ll,ll>> vp1;
  vector <pair<ll,ll>> vp2;
  for(ll i=0;i<n;i++){
     for(ll j=0;j<m;j++){
      if(a[i][j]==1)
        cnt1++;
      else cnt0++;
     }
     vp1.push_back(make_pair(cnt0,cnt1));
     cnt1=0;
     cnt0=0;
  }
  for(ll j=0;j<m;j++){
     for(ll i=0;i<n;i++){
      if(a[i][j]==1)
        cnt1++;
      else cnt0++;
     }
     vp2.push_back({cnt0,cnt1});
     cnt1=0;
     cnt0=0;
  }
  ll ans=0;
  for(ll i=0;i<n;i++){
    ll z=vp1[i].first;
    ll o=vp1[i].second;
    ans+=powr(2,z)-1;
    ans+=powr(2,o)-1;
  }
     for(ll i=0;i<m;i++){
    ll z=vp2[i].first;
    ll o=vp2[i].second;
    ans+=powr(2,z)-1;
    ans+=powr(2,o)-1;
  }
  ans-=(n*m);
  cout<<ans<<endl;
 // string s1;
 // cin>>s1;
  //cin>>s1;
   //vector<ll> res;
   //vector <pair<ll,ll>> vp;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



