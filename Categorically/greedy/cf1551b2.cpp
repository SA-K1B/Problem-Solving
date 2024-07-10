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
void solve()
{
  ll n,k;
   cin>>n>>k;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
   vector <pair<ll,ll>> v;
  for(ll i=0;i<n;i++){
   ll x;
   cin>>x;
   v.pb({x,i});
  }
  vector <ll> res(n+2);
  sort(v.begin(),v.end());
  ll c=1,cnt=1,mn=0;
  for(ll i=0;i<n;i++){
      ll fe=v[i].first;
      ll se=v[i].second;
      if(i==0){
        res[se]=c;
        if(c==k)
        mn++;
        c++;
        continue;
      }
      if(fe==v[i-1].first){
          cnt++;
          if(cnt>k){
              res[se]=0;
          }
          else{
              if(c%k==0){
                res[se]=k;
                mn++;
              }
              else res[se]=c%k;
              c++;
          }
      }
      else{
          cnt=1;
          if(c%k==0){
                res[se]=k;
                mn++;
          }
              else res[se]=c%k;
              c++;
      }
  }
 // cout<<mn<<endl;
  vector <ll> cnt2(n+2);
   for(ll i=0;i<n;i++){
     if(cnt2[res[i]]>=mn)
        cout<<"0"<<' ';
     else {
         cnt2[res[i]]++;
         cout<<res[i]<<' ';
     }
   }
     cout<<endl;
 // string s1;
 // cin>>s1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
      // cout<<setprecision(15);
        solve();
    }
    return 0;
}



