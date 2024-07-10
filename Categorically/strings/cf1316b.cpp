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
bool cmp(pair<ll,string>a,pair<ll,string>b){
   if(a.second==b.second)
     return a.first<b.first;
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
  ll n;
   cin>>n;
   /*vector <ll> a(n);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }*/
  //ll  a[100005];
  /*for(ll i=0;i<n;i++){
   cin>>a[i];
  }*/
  string s1;
  cin>>s1;
  vector <pair<ll,string>> v;
  for(ll k=1;k<=n;k++){
    string s="";
      if(n&1){
          if(k&1){
              ll x1=n-(k-1);
              for(ll j=n-x1;j<n;j++){
                s+=s1[j];
              }
              for(ll j=k-2;j>=0;j--){
                s+=s1[j];
              }
          }
          else{
              ll x1=n-(k-1);
              for(ll j=n-x1;j<n;j++){
                s+=s1[j];
              }
              for(ll j=0;j<=k-2;j++){
                s+=s1[j];
              }
          }
      }
          else{
          if(k%2==0){
              ll x1=n-(k-1);
              for(ll j=n-x1;j<n;j++){
                s+=s1[j];
              }
              for(ll j=k-2;j>=0;j--){
                s+=s1[j];
              }
          }
          else{
              ll x1=n-(k-1);
              for(ll j=n-x1;j<n;j++){
                s+=s1[j];
              }
              for(ll j=0;j<=k-2;j++){
                s+=s1[j];
              }
          }
      }
      v.pb({k,s});
  }
     sort(v.begin(),v.end(),cmp);
     cout<<v[0].second<<"\n"<<v[0].first<<endl;
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
        solve();
    }
    return 0;
}



