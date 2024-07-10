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
  ll l,r;
  cin>>l>>r;
  ll ans=Max;
  ll temp=r,mx=0;
   while (temp)
   {
       mx++;
       temp=temp>>1ll;
       /* code */
   }
   ll j,i;
  for(j=0;j<mx;j++){
     ll x=1ll<<j;
     ll d=l-r+1,zero=0;
     ll b=x&l;
     //cout<<x<<endl;
     if(b==0){
      for(i=l;i<=r;i++){
          if((x&i)!=b){
              break;
          }
          else zero++;
      }
          ll d2=r-i+1;
        //  cout<<x<<' '<<d2<<endl;
          ll x1=d2/x;
          if(x1%2){
              zero+=((x1/2)*x)+(d2%x);
          }
          else{
              zero+=(x1/2)*x;
          }
       }
      else{
        for(i=l;i<=r;i++){
          if((x&i)!=b){
              break;
          }
      }
          ll d2=r-i+1;
          ll x1=d2/x;
       //   cout<<x<<' '<<x1<<endl;
          if(x1%2==0){
              zero+=((x1/2)*x)+(d2%x);
             //cout<<"d"<<zero<<endl;
          }
          else{
              zero+=x;
              zero+=(x1/2)*x;
              if(x==1)
                zero++;
          }  
      }
      ans=min(ans,zero);
    //  cout<<ans<<endl;
  }
      cout<<ans<<endl;
   /*vector <ll> a(n+5);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }*/
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
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



