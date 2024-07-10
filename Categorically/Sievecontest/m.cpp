#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
/*void pre(){
    ll mx=100;
    primes.pb(2);
   for(ll i=3;i<=mx;i+=2){
        if(prime[i]==0){
         primes.pb(i);
    for(ll j=i*i;j<=mx;j+=2*i){
        prime[j]=1;
        }
     }
   }
}*/
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,cnt;
    while(cin>>n){
    vector <pair<ll,ll> > fact;
    vector <pair<ll,ll> >::iterator it;
        if(n==0)
            break;
        else{
            ll x=2;
            cnt=0;
            while(n%x==0){
                n/=x;
                cnt++;
            }
        if(cnt>0)
        fact.pb({cnt,x});
        for(ll k=3;k*k<=n;k+=2){
            cnt=0;
            while(n%k==0){
                n/=k;
                cnt++;
            }
           if(cnt>0)
           fact.pb({cnt,k});
        }
        if(n>1)
        fact.pb({1,n});
        for(ll j=0;j<fact.size();j++)
            cout<<fact[j].second<<"^"<<fact[j].first<<' ';
            cout<<endl;
        }
    }
    return 0;
}

