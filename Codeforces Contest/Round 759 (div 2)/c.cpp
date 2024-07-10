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
   vector <ll> a;
   vector <ll> b;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x>=0)
      a.pb(x);
    else {
        x*=-1;
        b.pb(x);
    }  
   }
   ll ans=0;
   ll sz1=a.size();
   ll sz2=b.size();
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   if(sz1==0){
     ans+=b[sz2-1];
    ll m=sz2-k-1,j;
    for(ll i=m;i>=0;i-=k)
       ans+=(2*b[i]);
   }
   else if(sz2==0){
        ans+=a[sz1-1];
    ll m=sz1-k-1;
    for(ll i=m;i>=0;i-=k)
       ans+=(2*a[i]);
   }
   else if(a[sz1-1]>=b[sz2-1]){
       ans+=a[sz1-1];
    ll m=sz1-k-1;
    for(ll i=m;i>=0;i-=k)
       ans+=(2*a[i]);
   for(ll i=sz2-1;i>=0;i-=k)
       ans+=(2*b[i]);    
   }
   else{
      ans+=b[sz2-1];
    ll m=sz2-k-1,j;
    for(ll i=m;i>=0;i-=k)
       ans+=(2*b[i]);
   for(ll i=sz1-1;i>=0;i-=k)
       ans+=(2*a[i]);    
   }
   cout<<ans<<endl;
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
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



