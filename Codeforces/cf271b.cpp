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
ll is[100050];
vector <ll> primes;
void primegen(){
    ll n,i,j,k,x,mx=100050;
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
  ll n,m;
   cin>>n>>m;
   ll  a[505][505];
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++)
      cin>>a[i][j];
  }
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
  ll num=a[i][j];
  auto pos=lower_bound(primes.begin(),primes.end(),num)-primes.begin();
  //cout<<primes[pos]<<endl;
  ll dif=primes[pos]-num;
  a[i][j]=dif;
  }
}
/*for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
   cout<<a[i][j]<<' ';
   }
   cout<<endl;
}*/
ll ans=Max;
 for(ll i=0;i<n;i++){
   ll sum=0;
   for(ll j=0;j<m;j++){
       sum+=a[i][j];
   }
   ans=min(ans,sum);
 }
 for(ll i=0;i<m;i++){
   ll sum=0;
   for(ll j=0;j<n;j++){
       sum+=a[j][i];
   }
   ans=min(ans,sum);
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
    primegen();
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



