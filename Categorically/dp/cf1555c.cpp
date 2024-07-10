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
  ll n;
   cin>>n;
   vector <ll> v1(n);
   vector <ll> v2(n);
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  vector <ll> p1(n,0);
  vector <ll> p2(n,0);
  vector <ll> s1(n,0);
  vector <ll> s2(n,0);
  for(ll i=0;i<n;i++){
   cin>>v1[i];
   if(i==0)
      p1[i]=v1[i];
     else
      p1[i]=p1[i-1]+v1[i];
  }
  for(ll i=0;i<n;i++){
   cin>>v2[i];
    if(i==0)
      p2[i]=v2[i];
     else
   p2[i]=p2[i-1]+v2[i];
  }
  if(n==1){
      cout<<"0"<<endl;
      return;
  }
  for(ll i=n-1;i>=0;i--){
     if(i==n-1)
        s1[i]=v1[i];
     else s1[i]=s1[i+1]+v1[i];
  }
  for(ll i=n-1;i>=0;i--){
   if(i==n-1)
     s2[i]=v2[i];
    else 
   s2[i]=s2[i+1]+v2[i];
  }
  ll res=Max;
  ll ans=Min;
  ll mx1=Min;
   for(ll i=0;i<n;i++){
         if(i==0)
           ans=s1[i+1];
         else if(i==n-1)
            ans=p2[i-1];  
         else ans=max(s1[i+1],p2[i-1]);
     res=min(res,ans);
     //cout<<ans<<endl;
   }
   cout<<res<<endl;
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



