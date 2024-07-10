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
ll n,c;
void solve()
{
   
   ll x;
   vector <ll> a(n+5);
   for(ll i=1;i<=n;i++){
    cin>>x;
    a[i]=a[i-1]+x;
   }
   for(ll i=1;i<=n;i++){
       if(a[i]%c==0){
           for(ll j=1;j<=i;j++)
             cout<<j<<' ';
             return;
       }
   }
   //for(ll i=1;i<=n;i++)
     // cout<<a[i]<<' ';
   map <ll,ll> mp;
    for(ll i=1;i<=n;i++){
       if(mp[a[i]%c]!=0){
         for(ll j=mp[a[i]%c]+1;j<=i;j++)
            cout<<j<<' ';
            return;
       }
       else mp[a[i]%c]=i;
    }
    cout<<"no sweets"<<endl;
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
  //  cin>>t;
    
  while(1){
      //  cout<<"Case "<<i<<":"<<' ';
        cin>>c>>n;
        if(n==0&&c==0)
          break;
        solve();
        cout<<endl;
    }
    return 0;
}