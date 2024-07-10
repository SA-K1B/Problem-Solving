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
  //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,a[55];
        cin>>n;
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll vis[55]={0};
        ll ans=0;
         for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                ll dif=a[j]-a[i];
                if(vis[dif]==0){
                    ans++;
                  vis[dif]=1;
                }
            }
         }
         cout<<ans<<endl;
    }
    return 0;
}


