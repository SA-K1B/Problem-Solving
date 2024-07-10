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
   // freopen("i.txt","r",stdin);
   // freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    while(cin>>n){
        vector<pair<ll,ll> > fact;
        if(n==0)
            break;
        else{
             ll y=n;
            if(n<0)
              n*=-1;
              ll cnt=0;
            while(n%2==0){
                n/=2;
                cnt++;
            }
            if(cnt>0)
                fact.pb({2,cnt});
            for(ll j=3;j*j<=n;j+=2){
                cnt=0;
                while(n%j==0){
                    n/=j;
                    cnt++;
                }
                 if(cnt>0)
                fact.pb({j,cnt});
            }
            if(n>1)
            fact.pb({n,1});
            if(y<0){
                printf("%lld = -1 x ",y);
                for(ll i=0;i<fact.size();i++){
                    for(ll j=0;j<fact[i].second;j++){
                        if(i==fact.size()-1&&j==fact[i].second-1)
                         printf("%lld",fact[i].first);
                       else printf("%lld x ",fact[i].first);
                    }
                }
            }
            else{
                     printf("%lld = ",y);
                for(ll i=0;i<fact.size();i++){
                    for(ll j=0;j<fact[i].second;j++){
                        if(i==fact.size()-1&&j==fact[i].second-1)
                         printf("%lld",fact[i].first);
                       else printf("%lld x ",fact[i].first);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

