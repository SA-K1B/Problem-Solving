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
vector <ll> cost(100005);
vector <ll> v[100005];
vector <bool> vis(100005);
stack <ll> st;
ll sum,cnt,mn;
void dfs(ll node)
{
   vis[node]=1;
   for(ll child: v[node]){
    if(vis[child]==0){
        dfs(child);
        }
    }
    st.push(node);
}
vector <ll> v2[100005];
void dfs2(ll node)
{
    vis[node]=1;
    for(auto it: v2[node]){
        if(!vis[it]){
          if(mn>cost[it]){
              mn=cost[it];
              cnt=1;
          }
          else if(mn==cost[it])
           cnt++;
          dfs2(it); 
        }
    }
}
void solve()
{
  ll n,m;
   cin>>n;
   for(ll i=1;i<=n;i++)
     cin>>cost[i];
   cin>>m;  
   for(ll i=1;i<=m;i++){
    ll x,y;
    cin>>x>>y;
    v[x].pb(y);
    v2[y].pb(x);
   }          
   for(ll i=1;i<=n;i++){
    if(vis[i]==0){
      dfs(i);
   }
 }
   for(ll i=1;i<=n;i++)
      vis[i]=0;
      ll ways=1;
   while (!st.empty())
   {
       ll x=st.top();
       st.pop();
       if(!vis[x]){
           mn=cost[x];
           cnt=1;
           dfs2(x);
           sum+=mn;
           ways=(ways*cnt)%M;
       }
       /* code */
   }
     cout<<sum<<' '<<ways<<endl;         
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