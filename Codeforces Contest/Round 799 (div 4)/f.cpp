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
        return (x%M);
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
        res*=a;
    }
    b/=2;
    a*=a;
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
ll f;
bool comb(ll a[],ll tmp[],ll s,ll e,ll ind,ll r){
    if(r==ind){
         ll sum=0;
        for(ll j=0;j<r;j++)
            sum+=tmp[j];
        if(sum%10==3){
            return 1;
        }
        else return 0;
    }
    for(ll i=s;i<=e&&e-i+1>=r-ind;i++){
        tmp[ind]=a[i];
        bool val= comb(a,tmp,i+1,e,ind+1,r);
         if(val){
           return 1;
         }
    }
    return 0;
}
void prnt(ll a[],ll n,ll r){
  ll tmp[r];
  bool val=comb(a,tmp,0,n-1,0,r);
  if(val)
    cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return;
}
void solve()
{
    f=0;
    ll  a[200005];
  ll n,cnt=0;
   cin>>n;
   map <ll,ll> mp;
   ll j=0;
   for(ll i=0;i<n;i++){
   ll x;
   cin>>x;
   x=x%10;
   mp[x]++;
   if(mp[x]<=3){
    a[j++]=x;
    cnt++;
   }
  }
  prnt(a,cnt,3);
 // string s;
 // cin>>s;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

