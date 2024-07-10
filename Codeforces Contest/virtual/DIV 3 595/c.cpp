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
ll par[200005];
ll res[200005];
ll findpar(ll k){
   if(k==par[k])
    return k;
   else return par[k]=findpar(par[k]);
}
void unite(ll a,ll b)
{
    par[b]=a;
}
void solve()
{
   ll n,x;
   cin>>n;
   for(ll i=1;i<=200005;i++){
      res[i]=0;
      par[i]=i;
   }
   for(ll i=1;i<=n;i++){
    cin>>x;
    ll pi=findpar(i);
    ll px=findpar(x);
   if(pi!=px){
    unite(pi,px);
      res[pi]+=res[px]+1;
   }
  }
   for(ll i=1;i<=n;i++){
    cout<<res[findpar(i)]+1<<' ';
   }
   cout<<endl;
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
    for(int j=1;j<=t;j++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


