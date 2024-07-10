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
bool cmp(pair<pair<ll,ll>,ll> a,pair<pair<ll,ll>,ll> b){
    pair<ll,ll> c;
    c=a.first;
    pair<ll,ll> d;
    d=b.first;
    if(c.second==d.second)
      return a.second>b.second;
    return c.second<d.second;
}
void solve()
{
   vector <pair<pair<ll,ll>,ll>> v;
   ll n;
   cin>>n;
   for(ll i=0;i<n;i++){
    ll s,f,w;
    cin>>s>>f>>w;
    v.pb({{s,s+w},f});
   }
   ll cnt=0,et=0;
   sort(v.begin(),v.end(),cmp);
   for(auto [a,b]:v){
    if(a.first>=et){
    //    cout<<a.first<<' '<<a.second<<' '<<b<<endl;
        cnt+=b;
        et=a.second;
     }
   }
   cout<<cnt<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


