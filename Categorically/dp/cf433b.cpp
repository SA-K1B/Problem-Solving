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
void solve()
{
  ll n;
  cin>>n;
  vector <ll> a(n+2);
  vector <ll> b(n+2);
  for(ll i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b.begin(),b.begin()+n);
  /* for(ll i=0;i<n;i++){
      cout<<a[i]<<' ';
   }
   cout<<endl;
    for(ll i=0;i<n;i++){
      cout<<b[i]<<' ';
   }*/
  //vector <ll> dp1(n+2);
  //vector <ll> dp2(n+2);
  for(ll i=1;i<n;i++){
    a[i]+=a[i-1];
    b[i]+=b[i-1];
  }
  ll m,type,l,r;
  cin>>m;
  while(m--){
    cin>>type>>l>>r;
    if(type==1){
     ll pre,ans;
     if(l==1){
        pre=0;
     }
     else pre=a[l-2];
      if(r==1){
       ans=a[r-1];
     }
     else ans=a[r-1]-pre;
     cout<<ans<<endl;
    }
    else{
      ll pre,ans;
     if(l==1){
        pre=0;
     }
     else pre=b[l-2];
      if(r==1){
       ans=b[r-1];
     }
     else ans=b[r-1]-pre;
     cout<<ans<<endl;
    }
  }
 // string s1;
 // cin>>s1;
  //cin>>s1;
   //vector<ll> res;
   //vector <pair<ll,ll>> vp;
   //for(ll i=0;i<n;i++)
   //cin>>a[i];
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



