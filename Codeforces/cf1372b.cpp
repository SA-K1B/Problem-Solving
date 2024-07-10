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
        ll n;
        cin>>n;
        if(n&1==0){
            cout<<n/2<<' '<<n/2<<endl;
        }
        else{
            ll ans=n-1;
            for(ll i=2;i*i<=n;i++){
                if(n%i==0){
                    ll f1=i;
                    ll f2=n/i;
                    if((n-f1)%f1==0)
                        ans=min(ans,n-f1);
                    if((n-f2)%f2==0)
                        ans=min(ans,n-f2);
                }
            }
            cout<<n-ans<<' '<<ans<<endl;
        }
    }
    return 0;
}

