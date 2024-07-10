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
  ll n,m;
   cin>>n>>m;
   char ch[55][55];
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  ll f=0,x;
  char ch1;
  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
        cin>>ch[i][j];
        if(ch[i][j]!='.'&&f==0){
          x=i+j;
          ch1=ch[i][j];
          f=1;
        }
    }
  }
  char ch2;
  if(ch1=='W')
    ch2='R';
  else if(ch1=='R')
    ch2='W';
  if(f==0){
    cout<<"YES"<<endl;
    for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
      if((i+j)%2)
        cout<<'W';
      else cout<<'R';
      }
      cout<<endl;
    }
    return;
  }
  else{
    for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
    if(ch[i][j]=='.'){
       if((i+j)%2==x%2)
        ch[i][j]=ch1;
       else ch[i][j]=ch2;
       }
    else{
        if((i+j)%2==x%2){
            if(ch[i][j]!=ch1){
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(ch[i][j]!=ch2){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
 }
    }
  }
  cout<<"YES"<<endl;
  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
    cout<<ch[i][j];
    }
    cout<<endl;
  }
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


