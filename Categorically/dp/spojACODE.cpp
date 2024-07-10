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
 //  cin>>n;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
  string s1;
  while(cin>>s1){
    if(s1=="0"){
    break;
    }
   ll dp[5005];
   dp[0]=1;
   ll mx=1;
   if(s1[1]=='0')
    dp[1]=0;
   else if(s1[2]=='0')
    dp[1]=1;
   else if(((s1[0]-'0')==2&&(s1[1]-'0'<=6))||(s1[0]-'0')==1){
    dp[1]=2;
    mx=2;
   }
   else dp[1]=1;
      for(ll i=2;i<s1.size();i++){
         if(s1[i]=='0')
          dp[i]=0;
        else if(dp[i-1]==0){
            dp[i]=mx;
        }
        else if(s1[i+1]=='0')
          dp[i]=dp[i-1];
        else if(((s1[i-1]-'0')==2&&(s1[i]-'0'<=6))||((s1[i-1]-'0')==1)){
           // cout<<i<<' '<<dp[i-2]<<' '<<dp[i-1]<<endl;
            dp[i]=dp[i-1]+dp[i-2];
        }
        else{
            dp[i]=dp[i-1];
        }
        mx=max(mx,dp[i]);
   }
   cout<<mx<<endl;
   //vector<ll> res;
   //vector <pair<ll,ll>> vp;
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
   // cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}




