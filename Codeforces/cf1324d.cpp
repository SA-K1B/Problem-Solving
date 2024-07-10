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
ll b[200005],d[200005];
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>d[i];
    for(ll i=0;i<n;i++)
        cin>>b[i];
    vector <ll> c;
     for(ll i=0;i<n;i++){
        c.pb(d[i]-b[i]);
     }
     sort(c.begin(),c.end());
     /*for(auto it:c){
        cout<<it<<' ';
     }*/
     ll ans=0;
     for(ll i=0;i<n;i++){
        if(c[i]>0){
            ll k=n-i;
            ll sum=(k*(k-1))/2;
            //cout<<sum<<endl;
            ans+=sum;
            break;
        }
        else{
        ll x=1-c[i];
        ll lb=lower_bound(c.begin()+i,c.end(),x)-(c.begin());
       // cout<<lb<<endl;
        ll y=n-lb;
        ans+=y;
        }
  }
    cout<<ans<<endl;
    return 0;
}

