#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;

int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll> > v;
    for(ll i=0;i<n;i++){
        ll s,t,p;
        cin>>s>>t>>p;
        v.pb({s,p});
        v.pb({t,-p});
    }
    ll sum=0,g=0;
    sort(v.begin(),v.end());
    for(auto [f,s]:v){
        sum+=s;
        //cout<<sum<<endl;
        if(sum>w){
            cout<<"No"<<endl;
            g=1;
           // cout<<f<<endl;
            break;
        }
    }
    if(g==0)
        cout<<"Yes"<<endl;
    return 0;
}

