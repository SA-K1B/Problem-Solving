#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll is[200010];
vector <ll> primes;
void primegen(){
   // cout<<"a";
    ll mx=200005;
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
void solve()
{
  ll dp[200005];
   ll n,i,j;
   cin>>n;
  // cout<<n<<endl;
   for(i=1;i<=n;i++){
     ll tmp=i;
     ll x=i;
     ll facts=1;
     for(j=0;primes[j]*primes[j]<=x;j++){
       // cout<<x<<endl;
      ll cnt=0;
      while (x%primes[j]==0)
      {
        cnt++;
        x/=primes[j];
        /* code */
      }
      facts*=(cnt+1);
     }
     if(x>1){
      facts*=2;
     }
    // cout<<x<<' '<<facts<<endl; 
     dp[tmp]=facts;
   }
   ll ans=0;
   for(i=1;i<n/2;i++){
    ans+=dp[i]*dp[n-i];
   }
   ans*=2;
   if(n%2==0)
     ans+=dp[n/2]*dp[n/2];
   else  
     ans+=2*(dp[n/2]*dp[n/2+1]);
   cout<<ans<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
   // cout<<"aa"<<endl;
    primegen();
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}