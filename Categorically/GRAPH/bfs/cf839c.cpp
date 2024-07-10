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
vector <ll> par(100005);
vector <ll> lv(100005);
vector <db> res(100005);
bool vis[100005];
vector <ll> v[100005];
void bfs(ll node){
   queue <ll> q;
   q.push(node);
   lv[1]=0;
   res[1]=1.0;
   while(!q.empty()){
    ll cur=q.front();
    vis[cur]=1;
    q.pop();
    for(ll k=0;k<v[cur].size();k++){
        ll child=v[cur][k];
        if(!vis[child]){
          par[child]=cur;
          lv[child]=lv[par[child]]+1;
          if(par[child]==1)
             res[child]=(res[par[child]*1.0])/v[par[child]].size();
          else res[child]=(res[par[child]]*1.0)/(v[par[child]].size()-1);
          q.push(child);
        }
    }
   }
}
void solve()
{
   ll n;
   cin>>n;
   ll k=n-1;
   while(k--){
    ll x,y;
    cin>>x>>y;
    v[x].pb(y);
    v[y].pb(x);
   }
   db ans=0;
   bfs(1);
   for(ll i=1;i<=n;i++){
    if(v[i].size()==1){
      ans+=res[i]*lv[i];
    }
   }
   cout<<fixed<<setprecision(15)<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


