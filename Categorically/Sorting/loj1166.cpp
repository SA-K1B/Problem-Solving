#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,tt=1;
    cin>>t;
    while(t--){
        ll n,a[105],ans=0;
        cin>>n;
        for(ll i=1;i<=n;i++)
            cin>>a[i];
         for(ll i=1;i<=n;i++){
            if(a[i]!=i){
                for(ll j=i+1;j<=n;j++){
                    if(a[j]==i){
                        swap(a[i],a[j]);
                        ans++;
                        break;
                    }
                }
            }
         }
         printf("Case %d: %d\n",tt++,ans);
    }
    return 0;
}

