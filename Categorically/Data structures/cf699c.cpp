
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
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  ll  a[105];
  for(ll i=0;i<n;i++)
    cin>>a[i];
  vector <ll> v;
  ll ans=0;
  for(ll i=0;i<n;i++){
    if(v.empty()){
        if(a[i]==3){
            if((i+1)<n&&a[i+1]==1)
                v.pb(2);
            else if((i+1)<n&&a[i+1]==2)
                v.pb(1);
            else if(i+1<n)
                v.pb(1);
        }
        else {
               if(a[i]==0)
                ans++;
                v.pb(a[i]);
        }
    }
    else{
        ll x=v.back();
        if(x!=0){
            if(x==a[i]){
                ans++;
               v.pb(0);
            }
            else{
          if(a[i]==3){
             if(x==1)
                v.pb(2);
             else if(x==2)
                v.pb(1);
              }
           else {
                if(a[i]==0)
                 ans++;
                 v.pb(a[i]);
               }
            }
        }
        else {
          if(a[i]==3){
          if((i+1)<n&&a[i+1]==1)
                v.pb(2);
            else if((i+1)<n&&a[i+1]==2)
                v.pb(1);
            else if(i+1<n){
                v.pb(1);
            }

         }
         else {
                if(a[i]==0)
                 ans++;
                v.pb(a[i]);
          }
        }
    }
  }
  cout<<ans<<endl;
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
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



