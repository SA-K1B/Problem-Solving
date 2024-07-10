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
    ll a,b,c,n,ans=-1;
    cin>>n>>a>>b>>c;
    for(ll i=0;i*b<=n;i++){
        for(ll j=0;i*b+j*c<=n;j++){
            ll r=n-(i*b)-(j*c);
            ll k=r/a;
            if(i*b+j*c+k*a==n){
                ans=max(i+j+k,ans);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

