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
vector <ll> res;
bool vis[200005];
vector <ll> v[200005];
ll pos[200005];
bool cmp(ll a,ll b){
   return pos[a]<pos[b];
}
void bfs(ll node){
   queue <ll> q;
   q.push(node);
   while(!q.empty()){
    ll cur=q.front();
    res.pb(cur);
    vis[cur]=1;
    q.pop();
    for(ll k=0;k<v[cur].size();k++){
        ll child=v[cur][k];
        if(!vis[child]){
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
   vector <ll> v1;
   for(ll i=1;i<=n;i++){
    ll x;
    cin>>x;
    v1.push_back(x);
    pos[x]=i;
   }
    for(ll i=1;i<=n;i++){
    sort(v[i].begin(),v[i].end(),cmp);
   }
   /* for(ll i=1;i<=n;i++){
         for(ll k=0;k<v[i].size();k++){
            cout<<v[i][k]<<' ';
         }
         cout<<endl;
    }*/
   bfs(1);
   for(ll i=0;i<n;i++){
     if(v1[i]!=res[i]){
        cout<<"No"<<endl;
        return;
     }
   }
   cout<<"Yes"<<endl;
   /*vector <pair<ll,ll>> vp;
   for(ll i=0;i<n;i++)
    cin>>a[i];*/
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


