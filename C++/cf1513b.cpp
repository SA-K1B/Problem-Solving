#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 1000000000000000000
#define Min -1000000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
ll M=1000000007;
ll ncr(ll x,ll y){
   ll ans=1,s=1;
    while(s<=y){
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
void solve()
{
  ll n;
   cin>>n;
   vector <ll> a(n+5);
   map<ll,ll> mp;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
   }
   auto it=mp.begin();
   ll mn=it->first;
   ll x=it->second;
   if(x<2){
    cout<<"0"<<endl;
   }
   else{
     for(ll i=0;i<n;i++){
        if((mn&a[i])!=mn){
            cout<<"0"<<endl;
            return;
        }
     }
     ll a=ncr(x,2);
     a=(a*2)%M;
    ll fact=1;
     for(ll i=1;i<=n-2;i++){
      fact=(fact*i)%M;
     }
     cout<<(fact*a)%M<<endl;
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}