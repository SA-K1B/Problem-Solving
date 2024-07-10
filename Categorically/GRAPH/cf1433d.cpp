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
    ll t;
    cin>>t;
    while(t--){
        map <ll,ll> m;
        ll n,y,fl=0;
        cin>>n;
        for(ll i=1;i<=n;i++){
            ll x;
            cin>>x;
            if(i!=1){
                if(y!=x)
                    fl=1;
            }
            m[i]=(x);
            y=x;
        }
        if(!fl){
            cout<<"NO"<<endl;
            continue;
        }
    cout<<"YES"<<endl;
        vector <ll> rem;
        ll f=m[1];
        ll s;
        for(ll i=2;i<=n;i++){
            if(m[i]!=f){
                cout<<1<<' '<<i<<endl;
                s=i;
            }
            else rem.pb(i);
        }
        for(ll j=0;j<rem.size();j++){
            cout<<s<<' '<<rem[j]<<endl;
        }
    }
    return 0;
}

