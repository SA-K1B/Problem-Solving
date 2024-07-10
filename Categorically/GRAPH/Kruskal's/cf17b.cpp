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
ll par[1005];
struct st{
   ll a;
   ll b;
   ll w;
};
st ar[10005];
bool cmp(st x,st y){
   return x.w<y.w;
}
ll findpar(ll x){
   if(par[x]==x)
      return x;
   return par[x]=findpar(par[x]);
}
void unite(ll x,ll y){
   par[y]=x;
}
ll vis[1005];
void solve()
{  
  ll n,m;
  cin>>n;
  for(ll i=1;i<=n;i++){
    par[i]=i;
  }
  vector <ll> a(n+5);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   cin>>m;
  for(ll i=0;i<m;i++){
      cin>>ar[i].a>>ar[i].b>>ar[i].w;
    }
    sort(ar,ar+m,cmp);
    ll sum=0;
    for(ll i=0;i<m;i++){
      if(vis[ar[i].b]==0){
      ll paa=findpar(ar[i].a);
      ll pab=findpar(ar[i].b);
      vis[ar[i].b]=1;
      if(paa!=pab){
          unite(paa,pab);
          sum+=ar[i].w;
        //  cout<<sum<<endl;
       }
      }
    }
    ll x=findpar(1); 
    for(ll i=2;i<=n;i++){
      ll y=findpar(i);
      if(x!=y){
          cout<<"-1"<<endl;
          return;
      }
    }
    cout<<sum<<endl;
  //ll  a[100005];
  /*for(ll i=0;i<n;i++){
   cin>>a[i];
  }*/
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
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}