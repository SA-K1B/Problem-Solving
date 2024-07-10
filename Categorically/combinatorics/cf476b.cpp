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
   //cin>>n;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  /*for(ll i=0;i<n;i++){
   cin>>a[i];
  }*/
  string s1,s2;
  cin>>s1>>s2;
  ll p1=0,m1=0,p2=0,m2=0,q=0;
  ll l=s1.size(); 
  for(ll i=0;i<l;i++){
      if(s1[i]=='+')
        p1++;
      else m1++;
      if(s2[i]=='+')
        p2++;
      else if(s2[i]=='-')
        m2++;
      else q++;      
  }
  if(p2>p1||m2>m1){
      db ans=0;
      cout<<fixed<<ans<<endl;
  }
  else{
      if((p1-p2)+(m1-m2)!=q){
          db ans=0;
          cout<<fixed<<ans<<endl;
      }
      else{
          ll x1=ncr(q,(p1-p2));
          ll x2=powr(2,q);
         // cout<<x1<<' '<<x2<<endl;
          db ans=(x1)/(x2*1.0);
         // printf("%.12lf",ans);
          cout<<fixed<<ans<<endl;
      }
  }
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
       cout<<setprecision(12);
        solve();
    }
    return 0;
}



