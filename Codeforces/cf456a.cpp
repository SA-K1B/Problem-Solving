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
    ll n;
    vector <pair<ll,ll> > v;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    int f=0;
    for(ll i=0;i<n-1;i++){
        if(v[i].second>v[i+1].second){
            f=1;
            break;
        }
    }
    if(f)
        cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
    return 0;
}
