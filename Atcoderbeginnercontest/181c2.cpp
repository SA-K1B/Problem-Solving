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
    ll n,f=0;
    cin>>n;
    vector <pair<ll,ll> > v;
    for(ll i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    for(ll i=0;i<n-2;i++){
        for(ll j=i+1;j<n-1;j++){
            for(ll k=j+1;k<n;k++){
                ll a=(v[j].second-v[i].second);
                ll b=(v[j].first-v[i].first);
                ll c=(v[k].second-v[j].second);
                ll d=(v[k].first-v[j].first);
                if(a*d==b*c){
                    f=1;
                    break;
                }
            }
            if(f)
                break;
        }
            if(f)
                break;
    }
    if(f)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

