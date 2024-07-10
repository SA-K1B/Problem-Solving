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
ll m,ans;
vector <ll> par(100005);
vector <ll> fre(100005);
vector <ll> a(100005);
bool vis[100005];
vector <ll> v[100005];
void bfs(ll node){
   queue <ll> q;
   q.push(node);
   while(!q.empty()){
    ll cur=q.front();
    vis[cur]=1;
    if(cur==1&&a[1]==1)
        fre[1]=1;
    else{
      if(a[cur]==1)
        fre[cur]=fre[par[cur]]+1;
    }
    q.pop();
    if(fre[cur]>m){
       continue;
    }
   // if(v[cur].size()==0)
     //   ans++;
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
   cin>>n>>m;
   ll k=n-1;
   for(ll i=1;i<=n;i++)
      cin>>a[i];
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
   for(ll i=2;i<=n;i++){
    if(v[i].size()==1&&fre[i]<=m&&vis[i]==1)
        ans++;
   }
   cout<<ans<<endl;
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
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}



