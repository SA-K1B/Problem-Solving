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
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    vector <ll> a;
  //  vector <ll> div;
       cin>>n;
    for(ll i=0;i<n;i++){
       cin>>x;
          a.pb(x);
    }
    //sort(a.bezgin(),a.end());
    ll s=a.size(),g=a[0];
    for(ll i=1;i<s;i++){
        g=__gcd(g,a[i]);
    }
   ll ans=0;
    for(ll i=1;i*i<=g;i++){
     if(g%i==0){
        ans++;
       // cout<<i<<endl;
       if((g/i)!=i){
          ans++;;
      //  cout<<fr/i<<endl;
      }
    }
}
   // ll ans=div.size();
    cout<<ans<<endl;
    return 0;
}

