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
void solve()
{
  ll n;
  vector <ll> a;
  string s1;
 // cin>>n;
  cin>>s1;
  ll sz=s1.size();
  ll j=0,presum=0;
  while(j<sz){
    if(s1[j]=='+')
        presum++;
    else presum--;
    a.pb(presum);
    j++;
  }
  //cout<<presum<<endl;
  j=0;
  auto k1=min_element(a.begin(),a.end())-a.begin();
  //cout<<a[k1+1]<<endl;
  ll mx=a[k1]*-1,ans=0;
  for(ll i=0;i<mx;i++){
    ll k=i*-1;
    while(a[j]>=k){
        j++;
    }
    ans+=j+1;
  }
  //cout<<"6"<<endl;
  ans+=sz;
  cout<<ans<<endl;
   /*vector <ll> v;
   vector<ll> res;
   vector <pair<ll,ll>> vp;
   for(ll i=0;i<n;i++)
    cin>>a[i];*/
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
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


