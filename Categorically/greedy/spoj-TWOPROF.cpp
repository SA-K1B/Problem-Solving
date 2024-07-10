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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <pair<ll,ll>> v1;
        for(ll i=1;i<=n;i++){
            ll x,y;
            cin>>x>>y;
            v1.pb({x,1});
            v1.pb({y,-1});
        }
        sort(v1.begin(),v1.end());
        ll f1=0,sum=0,ans=Min,cnt=0;
        for(auto [f,s]:v1){
           cnt++;
           if(cnt==2){
            if(s==-1){
                f1=1;
                continue;
             }
           }
           if(cnt==4){
              if(f1)
              sum-=1;
           }
           sum+=s;
           ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}

