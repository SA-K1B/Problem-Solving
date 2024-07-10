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
void solve()
{
  ll n;
   cin>>n;
   vector <ll> a(n+5);
   for(ll i=1;i<=n;i++){
    cin>>a[i];
   }
   ll f=0;
    for(ll i=2;i<=n;i++){
      if(a[i]<a[i-1]){
        f=1;
        break;
      }
    }
    if(f==0){
        cout<<"0"<<endl;
        return;
    }
   if(a[n]<a[n-1]){
    cout<<"-1"<<endl;
    return;
   }
   ll mx=a[n];
   ll mn=a[n-1];
   ll ix=n,in=n-1;
   vector<pair<ll,pair<ll,ll>>> ans;
   for(ll i=n-2;i>=1;i--){
        if(mx<0&&mn<0){
            cout<<"-1"<<endl;
            return;
        }
     if(a[i]>a[i+1]){
        a[i]=mn-mx;
        ans.pb({i,{in,ix}});
        mn=a[i];
        in=i;
     }
     else{
        mn=a[i];
        in=i;
     }
   }
   cout<<ans.size()<<endl;
   for(auto it: ans){
    cout<<it.first<<' '<<it.second.first<<' '<<it.second.second<<endl;
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

