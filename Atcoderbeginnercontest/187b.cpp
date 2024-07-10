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
   ll n;
   cin>>n;
   vector <pair<ll,ll>> v;
   for(ll i=1;i<=n;i++){
    ll x,y;
    cin>>x>>y;
    v.pb({x,y});
   }
   ll ans=0;
   for(ll i=0;i<n;i++){
      for(ll j=i+1;j<n;j++){
         ll a=abs(v[j].second-v[i].second);
         ll b=abs(v[j].first-v[i].first);
         //cout<<a<<' '<<b<<' '<<c<<endl;
         if(a<=b){
            //cout<<"d"<<endl;
            ans++;
         }
      }
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
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


