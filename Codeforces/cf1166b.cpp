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
        ll n,x,m;
        cin>>n>>x>>m;
        ll ans=0;
        ll p1=x;
        ll p2=x;
        for(ll i=0;i<m;i++){
            ll l,r;
            cin>>l>>r;
            if(p1>=l&&p1<=r){
                if(l<p1){
                ans+=(p1-l);
                p1=l;
                }
            }
             if(p2>=l&&p2<=r){
                if(r>p2){
                ans+=(r-p2);
                 p2=r;
                }
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}


