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
  ll n,k;
   cin>>n>>k;
   vector <ll> a(n+5);
   vector <pair<ll,ll>> v;
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   ll i;
   sort(a.begin(),a.begin()+n);
   for(i=0;i<n;i++){
    if(v.empty()||a[i]!=v.back().first)
        v.pb({a[i],1});
    else if(a[i]==v.back().first)
        v.back().second++;
    }
    for(i=0;i<v.size();i++){
        if(v[i].second>=k){
            break;
        }
    }
    if(i==v.size()){
        cout<<"-1"<<endl;
        return;
    }
    ll l=v[i].first,r=v[i].first;
  //  cout<<l<<' '<<r<<endl;
    ll al=l,ar=r,d;
    ll mx=ar-al;
    ll sz=v.size();
    for(ll j=i+1;j<sz;){
        if((v[j].first==r+1)&&(v[j].second>=k)){
            r=v[j].first;
            d=r-l;
            j++;
            if(d>=mx){
            al=l;
            ar=r;
            mx=d;
        }
     }
     else{
        ll m;
      for(m=j;m<v.size();m++){
        if(v[m].second>=k){
            break;
        }
      }
   //  cout<<v[m].first<<endl;
      if(m<sz){
        l=v[m].first;
        r=v[m].first;
        j++;
      }
      else break;
     }
    }
    cout<<al<<' '<<ar<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
