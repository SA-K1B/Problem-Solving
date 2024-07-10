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
ll bfs(ll node){
    vector <ll> par(1000000);
    vector <ll> l(1000000);
  //  cout<<node<<endl;
   queue <ll> q;
   q.push(node);
   while(!q.empty()){
    ll cur=q.front();
    q.pop();
          ll c1=cur+1;
          ll c2=2*cur;
          par[c1]=cur;
          par[c2]=cur;
          l[c1]=1+l[par[c1]];
          l[c2]=1+l[par[c2]];
        //  cout<<c1<<endl;
          if(c1%32768==0||c2%32768==0)
            return l[c1];
          q.push(c1);
          q.push(c2);
        }
}
void solve()
{
   ll n;
   cin>>n;
   vector<ll> v(n+5);
   for(ll i=0;i<n;i++)
    cin>>v[i];
  for(ll i=0;i<n;i++){
   //cout<<v[i];
   if(v[i]==0){
    cout<<"0"<<' ';
    continue;
   }
   ll ans=bfs(v[i]);
   cout<<ans<<' ';
  }
  cout<<endl;
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



