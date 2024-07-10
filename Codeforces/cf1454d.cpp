#include<bits/stdc++.h>
#define ll long long int
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
    ll t;
    cin>>t;
    while(t--){
    vector <pair<ll,ll> > fact;
    vector <ll> res;
        ll n,cnt=0;
        cin>>n;
        if(n<4){
            cout<<"1"<<endl;
            cout<<n<<endl;
            continue;
        }
        ll y=n;
        for(ll i=2;i*i<=n;i++){
                cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
               // cout<<n<<' '<<cnt<<endl;
            }
            if(cnt>0){
                    //cout<<"r"<<endl;
            fact.pb({cnt,i});
            }
        }
        if(n>1)
        fact.pb({1,n});
        sort(fact.begin(),fact.end());
        reverse(fact.begin(),fact.end());
        cout<<fact[0].first<<endl;
        ll x=1;
        for(ll i=1;i<fact[0].first;i++){
            res.pb(fact[0].second);
            x*=fact[0].second;
        }
        res.pb(y/x);
        for(auto k:res)
            cout<<k<<' ';
            cout<<"\n";
    }
    return 0;
}

