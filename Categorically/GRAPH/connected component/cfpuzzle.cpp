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
vector <ll> v[400005];
vector  <ll> vis(400005);
void dfs(ll node){
    //cout<<node<<endl;
    vis[node]=1;
    for(ll child:v[node]){
        if(vis[child]==0)
            dfs(child);
    }
    return;
}
ll l;
void solve()
{
  ll n;
   cin>>n;
   if(l>1){
   for(ll i=1;i<=n;i++){
    vis[i]=0;
    v[i].clear();
   }
 }
   vector <ll> v1;
   vector <ll> v2;
   ll temp=n;
   while(temp--){
    ll x;
    cin>>x;
    v1.pb(x);
   }
   temp=n;
    while(temp--){
    ll x;
    cin>>x;
    v2.pb(x);
   }
   for(ll i=0;i<n;i++){
    v[v1[i]].pb(v2[i]);
   }
   ll cnt=0;
   for(ll i=1;i<=n;i++){
    if(vis[i]==0){
   // cout<<i<<endl;
    cnt++;
    dfs(i);
     }
   }
   cout<<powr(2,cnt)<<endl;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
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
    ll t;
    cin>>t;
    for(l=1;l<=t;l++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



