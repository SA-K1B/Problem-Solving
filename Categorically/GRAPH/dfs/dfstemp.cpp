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
vector <ll> v[100005];
vector <bool> vis(100005);
ll sum,cnt,mn;
void dfs(ll node)
{
   vis[node]=1;
   for(ll child: v[node]){
    if(vis[child]==0){
        dfs(child);
        }
    }
}
void solve()
{
  ll n,m;
   cin>>n>>m;
   for(ll i=1;i<=m;i++){
    ll x,y;
    cin>>x>>y;
    v[x].pb(y);
    v[y].pb(x);
   }
   for(ll i=1;i<=n;i++){
    if(vis[i]==0){
      dfs(i);
   }
  }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



