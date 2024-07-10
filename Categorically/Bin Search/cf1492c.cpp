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
ll n,m;
bool isvalid(ll x,string s1,string s2){
    ll i=0,j=0;
    while(1){
        if(s1[i]==s2[j])
            break;
        i++;
        j++;
    }
    i+=x;
    j++;
    while(j<m){
      if(s1[i]==s2[j]){
        i+=x;
        j++;
      }
      else{
        i++;
      }
    }
    if(j>=m)
        return 1;
    else return 0;
}
void solve()
{
   cin>>n>>m;
  string s1,s2;
  cin>>s1>>s2;
  ll l=0,r=n-1,ans=Min;
  while(l<=r){
    ll mid=(l+r)/2;
    if(isvalid(mid,s1,s2)){
      ans=max(ans,mid);
      l=mid+1;
    }
    else r=mid-1;
  }
  cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    ll t=1;
  //  cin>>t;
    for(ll i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
