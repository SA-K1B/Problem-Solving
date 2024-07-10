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
   ll n,m;
   cin>>n>>m;
   vector <ll> a;
   vector <ll> b;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
   }
   for(ll i=0;i<m;i++){
    ll x;
    cin>>x;
    b.pb(x);
   }
   ll cost=0,j=0;
   sort(a.begin(),a.end());
   for(ll i=n-1;i>=0;i--){
   if((a[i]-1)>=j&&j<m&&b[j]<b[a[i]-1]){
    cost+=b[j];
    j++;
   }
   else{
    cost+=b[a[i]-1];
   }
 }
 cout<<cost<<endl;
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
        //cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


