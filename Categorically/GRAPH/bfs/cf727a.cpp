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
map <ll,ll> dis;
map <ll,ll> par;
void bfs(ll x,ll b)
{
    vector <ll> ans;
    queue<ll> q;
    q.push(x);
    dis[x]=1;
    while(!q.empty()){
        ll fr=q.front();
        q.pop();
        ll k1=2*fr;
        ll k2=10*fr+1;
        dis[k1]=dis[fr]+1;
        par[k1]=fr;
        if(k1==b){
         cout<<"YES"<<endl;
         cout<<dis[k1]<<endl;
         ll y=par[k1];
         ans.pb(b);
         while(y!=x){
          ans.pb(y);
          y=par[y];
         }
         ans.pb(x);
         reverse(ans.begin(),ans.end());
         for(auto it: ans)
            cout<<it<<' ';
         return;
       }
        dis[k2]=dis[fr]+1;
        par[k2]=fr;
        if(k2==b){
         cout<<"YES"<<endl;
         cout<<dis[k2]<<endl;
         ll y=par[k2];
         ans.pb(b);
         while(y!=x){
          ans.pb(y);
          y=par[y];
         }
         ans.pb(x);
         reverse(ans.begin(),ans.end());
         for(auto it: ans)
            cout<<it<<' ';
         return;
       }
       if(k1<b)
        q.push(k1);
        if(k2<b)
        q.push(k2);
    }
    cout<<"NO"<<endl;
    return;
}
void solve()
{
  ll a,b;
   cin>>a>>b;
   bfs(a,b);
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
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
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



