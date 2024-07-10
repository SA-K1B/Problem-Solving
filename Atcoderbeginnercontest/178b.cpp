#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 1000000000000000000
#define Min -1000000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
        ll ans=Min;
        for(ll i=0;i<2;i++){
            for(ll j=2;j<4;j++){
              ans=max(ans,(a[i]*a[j]));
            }
        }
        cout<<ans<<endl;
    return 0;
}

