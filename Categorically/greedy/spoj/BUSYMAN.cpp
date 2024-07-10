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
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
   return a.second<b.second;
}
void solve()
{
   ll n;
   cin>>n;
   vector<pair<ll,ll>> v;
   ll k=n;
   while(k--){
    ll x,y;
    cin>>x>>y;
    v.pb({x,y});
   }
   sort(v.begin(),v.end(),cmp);
   ll et,ans=1;
   et=v[0].second;
   for(ll i=1;i<n;i++){
    ll st=v[i].first;
    if(st>=et){
        ans++;
        et=v[i].second;
    }
   }
   cout<<ans<<endl;
   /*for(ll i=0;i<n;i++)
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
    cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


