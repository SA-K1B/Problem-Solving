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
vector <ll> va[200005];
void solve()
{
  ll n,b3,a;
  //ll  a[100005];
  //string s1;
  //cin>>s1;
  //cin>>s1;
  //vector<ll> res;
  // vector <pair<ll,ll>> vp;
  //for(ll i=0;i<n;i++)
  //cin>>a[i];
  cin>>a>>b3>>n;
  vector <ll> e(a+2);
  vector <ll> f(b3+2);
  vector <ll> g(n+2);
  vector <ll> b(n+2);

  for(ll i=0;i<n;i++){
    cin>>b[i];
  }
   for(ll i=0;i<n;i++){
    cin>>g[i];
  }
  for(ll i=0;i<n;i++){
    e[b[i]]++;
  }
   for(ll i=0;i<n;i++){
    f[g[i]]++;
  }
  ll ans=0;
  for(ll i=0;i<n;i++){
  ll f1=e[b[i]];
  ll s=f[g[i]];
  ans+=n-(f1+s-1);
}
  ans/=2;
  cout<<ans<<endl;
  //cin>>s1;
   /*vector<ll> res;
   vector <pair<ll,ll>> vp;
   for(ll i=0;i<n;i++)
    cin>>a[i];*/
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
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


