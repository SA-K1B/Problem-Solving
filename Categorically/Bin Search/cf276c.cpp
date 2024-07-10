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
  ll n,m;
   cin>>n>>m;
   vector <ll> a(n+5),l(m+5),u(m+5);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   ll k=m;
   for(ll i=0;i<m;i++){
      cin>>l[i]>>u[i];
    }
    vector<ll> v;
    sort(l.begin(),l.begin()+k);
    sort(u.begin(),u.begin()+k);
    for(ll i=1;i<=n;i++){
        ll pos1=upper_bound(l.begin(),l.begin()+k,i)-l.begin();
        ll pos2=lower_bound(u.begin(),u.begin()+k,i)-u.begin();
        v.pb(pos1-pos2);
    }
    ll ans=0;
    sort(a.begin(),a.begin()+n);
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        ans+=a[i]*v[i];
    }
    cout<<ans<<endl;
  //ll  a[100005];
  /*for(ll i=0;i<n;i++){
   cin>>a[i];
  }*/
 // string s;
 // cin>>s;
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

