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
void solve()
{
   ll n,a[105];
   cin>>n;
   ll t1=0;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i])
        t1++;
   }
   vector <pair<ll,ll>> v;
   for(ll i=0;i<n;i++){
      if(v.empty()||v.back().first!=a[i])
      v.pb({a[i],1});
      else v.back().second++;
   }
    if(v[0].first==1&&v.size()==1){
        cout<<n-1<<endl;
        return;
    }

  // cout<<t1<<endl;
  /* for(auto [f,s]:v){
    cout<<f<<' '<<s<<endl;
   }*/
   ll c0=0,c1=0,ans=0;
   for(ll i=0;i<v.size();i++){
      if(i==0&&v[i].first==1)
        continue;
      else{
        if(v[i].first==1)
           c1+=v[i].second;
        else c0+=v[i].second;
        if(c0>c1)
            ans=max(ans,(t1-c1)+c0);
        else{
            c0=0;
            c1=0;
        }
      }
      //cout<<ans<<endl;
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
   // cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


