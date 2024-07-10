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

int main()
{
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n,m,a[11][11];
    cin>>n>>m;
    for(ll i=1;i<=n;i++){
      for(ll j=1;j<=m;j++)
         cin>>a[i][j];
      }
    ll cnt=0,mn=Max,sum=0;
    for(ll i=1;i<=n;i++){
      for(ll j=1;j<=m;j++){
            if(a[i][j]<0)
            cnt++;
         sum+=abs(a[i][j]);
         mn=min(mn,abs(a[i][j]));
         }
      }
      if(cnt&1)
          sum-=2*mn;
    cout<<sum<<endl;
    }
    return 0;
}


