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
vector <int> v1[200005];
vector <int> v2[200005];
vector <bool> vis(200005);
int cnte,cntv;
void dfs(int node)
{
  cnte+=v1[node].size();
    cntv++;
   vis[node]=1;
   for(ll child: v2[node]){
    if(vis[child]==0){
        dfs(child);
        }
    }
    return;
}
void solve()
{
  int n,m;
   cin>>n>>m;
   for(int i=1;i<=m;i++){
    ll x,y;
    cin>>x>>y;
    if(y<x)
      swap(x,y);
    v1[x].pb(y);
    v2[x].pb(y);
    v2[y].pb(x);
    }
    if(n!=m){
      cout<<"No"<<endl;
        return;
    }
   for(int i=1;i<=n;i++){
    if(vis[i]==0){
       cnte=0;
       cntv=0;
      dfs(i);
     // cout<<cnte<<' '<<cntv<<endl;
      if(cnte!=cntv){
        cout<<"No"<<endl;
        return;
      }
   }
  }
  cout<<"Yes"<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}