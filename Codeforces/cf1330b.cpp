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
   /*vector <ll> a(n);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }*/
  ll  a[200005],mx=Min;
  vector <ll> cnt(n);
  for(ll i=0;i<n;i++){
   cin>>a[i];
   cnt[a[i]]++;
   mx=max(mx,a[i]);
  }
  if(n==2){
      cout<<"1"<<endl;
      cout<<"1"<<' '<<"1"<<endl;
      return;
  }
  ll d=n-mx;
  for(ll i=1;i<=mx;i++){
      if(i<=d){
          if(cnt[i]!=2){
              cout<<"0"<<endl;
              return;
          }
      }
      else{
          if(cnt[i]!=1){
              cout<<"0"<<endl;
              return;
          }
      }
  }
 // cout<<"a"<<endl;
  ll f=0;
   vector <ll> cnt2(n);
  for(ll i=0;i<d;i++){
     if(a[i]>d){
          f=1;
          break;
     }
     else if(cnt2[a[i]]>=1){
         f=1;
         break;
     }
     else{
         cnt2[a[i]]++;
     }
  }
  ll f1=0;
  vector <ll> cnt3(n);
   for(ll i=n-1;i>=n-d;i--){
     if(a[i]>d){
          f1=1;
          break;
     }
     else if(cnt3[a[i]]>=1){
         f1=1;
         break;
     }
     else{
         cnt3[a[i]]++;
     }
  }
  if(f==0&&f1==0){
      if(d!=n-d){
       cout<<"2"<<endl;    
      cout<<d<<' '<<n-d<<endl;
      cout<<n-d<<' '<<d<<endl;
      }
      else{
        cout<<"1"<<endl;    
      cout<<d<<' '<<n-d<<endl;
      }
  }
  else if(f&&f1){
      cout<<"0"<<endl;
  }
  else if(f==1){
      cout<<"1"<<endl;
      cout<<n-d<<' '<<d<<endl;
  }
  else{
      cout<<"1"<<endl;
      cout<<d<<' '<<n-d<<endl;
  }
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



