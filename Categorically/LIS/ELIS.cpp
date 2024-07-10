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
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    vector <ll> a;
    vector <ll> tmp;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        a.pb(x);
    }
    b.pb(a[0]);
    for(ll i=1;i<n;i++){
        if(a[i]>b.back())
            b.pb(a[i]);
        else{
            ll in=lower_bound(b.begin(),b.end(),a[i])-b.begin();
            b[in]=a[i];
        }
    }
    cout<<b.size()<<endl;
    return 0;
}

