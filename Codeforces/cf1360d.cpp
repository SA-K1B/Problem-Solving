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
    ll t,x;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
       // cout<<"r"<<endl;
               ll ans=n;
               for(ll i=1;i*i<=n;i++){
                   // cout<<i<<endl;
                if(n%i==0){
                x=n/i;
                if(i<=k){
                    ans=min(ans,x);
                }
                 if(x<=k){
                      ans=min(ans,i);
              }
            }
        }
            cout<<ans<<endl;
}
    return 0;
}

