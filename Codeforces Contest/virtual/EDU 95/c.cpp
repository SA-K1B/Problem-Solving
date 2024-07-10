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
    ll n,a[200005];
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector <pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        ll x=a[i];
        if(v.empty()||v.back().first!=x)
           v.pb({x,1});
        else v.back().second++;
    }
    ll ans=0;
    if(v[0].first==1){
        ll x=v[0].second/3;
        ll rem=v[0].second%3;
        if(rem)
            x++;
        ans+=x;
    }
    ll n2=v.size();
    for(ll i=1;i<n2;i++){
        ll f=v[i].first;
        ll s=v[i].second;
        if(f==1){
            ll y=s/3;
            ans+=y;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


