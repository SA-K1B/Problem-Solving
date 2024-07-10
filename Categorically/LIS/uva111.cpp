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
  //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
        map<ll,ll> m;
        ll y;
        for(ll i=1;i<=n;i++){
            cin>>y;
            m[y]=i;
        }
        while(cin>>y){
            vector <ll> v;
          v.pb(y);
          for(ll i=2;i<=n;i++){
            cin>>y;
            v.pb(y);
          }
          /*for(auto [f,s]:m)
            cout<<f<<' '<<s<<endl;*/
          vector<ll> b;
          b.pb(m[v[0]]);
         for(ll i=1;i<n;i++){
        if(m[v[i]]>b.back())
            b.pb(m[v[i]]);
        else{
            ll in=lower_bound(b.begin(),b.end(),m[v[i]])-b.begin();
            b[in]=m[v[i]];
        }
      }
      cout<<b.size()<<endl;
    }
    return 0;
}

