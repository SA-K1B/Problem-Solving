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
  ll k,m,n;
   scanf("\n");
   cin>>k>>n>>m;
   ll a[105],b[105];
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  for(ll i=0;i<m;i++){
      cin>>b[i];
  }
/*  for(ll i=0;i<n;i++)
    cout<<a[i]<<' ';
    cout<<endl;*/
  vector <ll> v;
  ll x=max(n,m);
  ll i=0,j=0;
  for(ll l=0;l<(n+m);l++){
      if(j>=m){
          while (i<n)
          {
              v.pb(a[i]);
              i++;
              /* code */
          }
      }
      if(i>=n){
          while (j<m)
          {
              v.pb(b[j]);
              j++;
              /* code */
          }
      }
      if(i>=n&&j>=m)
        break;
      if(a[i]<b[j]){
        v.pb(a[i]);
        i++;
      }
      else if(a[i]>b[j]){
       v.pb(b[j]);
       j++;
      }
      else if(a[i]==b[j]){
          v.pb(a[i]);
          i++;
      }
  }
  for(ll g=0;g<v.size();g++){
      if(v[g]==0)
        k++;
      else if(v[g]>k){
          cout<<"-1"<<endl;
          return;
      }  
  }
  for(auto it: v)
  cout<<it<<' ';
  cout<<endl;
 // string s1;
 // cin>>s1;
   //vector<ll> res;
   //vector <pair<ll,ll>> vp;
}
int main()
{
   // ios::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
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



