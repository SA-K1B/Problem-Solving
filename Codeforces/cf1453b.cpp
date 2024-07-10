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
        ll n,a[200005];
        cin>>n;
        for(ll i=0;i<n;i++)
            cin>>a[i];
        vector <ll> v;
        ll var=0;
        ll f=a[0];
        for(ll i=1;i<n;i++){
          ll d=f-a[i];
          ll x=d-var;
           v.pb(abs(x));
           var+=x;
        }
        sort(v.begin(),v.end());
        ll sum=0;
        for(ll i=0;i<v.size()-1;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

