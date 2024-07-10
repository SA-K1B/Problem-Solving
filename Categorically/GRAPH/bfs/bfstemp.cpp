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
bool vis[200005];
vector <ll> v[200005];
void bfs(ll node){
   queue <ll> q;
   q.push(node);
   while(!q.empty()){
    ll cur=q.front();
    vis[cur]=1;
    q.pop();
    for(ll k=0;k<v[cur].size();k++){
        ll child=v[cur][k];
        if(!vis[child]){
          par[child]=cur;
          q.push(child);
          //cout<<child<<endl;
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
   /* for(ll i=1;i<=n;i++){
         for(ll k=0;k<v[i].size();k++){
            cout<<v[i][k]<<' ';
         }
         cout<<endl;
    }*/
   bfs(1);
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


