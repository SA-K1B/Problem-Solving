#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
bool prime[105];
vector <ll> primes;
map <ll,ll> m;
map <ll,ll>:: iterator it;
void pre(){
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
}
void fact(ll x){
   for(ll k=2;k<=x;k++){
    ll num=k;
    ll sq=sqrt(num);
    for(ll j=0;j<primes.size()&&primes[j]<=sq;j++){
      ll p=primes[j];
    //  cout<<p<<endl;
       ll cnt=0;
       while(num%p==0){
        num/=p;
        cnt++;
       }
       if(cnt>0)
            m[p]+=cnt;
        sq=sqrt(num);
     }
     if(num>1)
        m[num]+=1;
   }
}
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    ll t,cnt=1;
    cin>>t;
    while(t--){
        //printf("Case %lld: ",cnt++);
        ll n;
        cin>>n;
         printf("Case %lld: %lld = ",cnt++,n);
        fact(n);
         for(it=m.begin();it!=m.end();it++){
         if(it!=m.begin())
            printf(" * %lld (%lld)",it->first,it->second);
         else printf("%lld (%lld)",it->first,it->second);
        }
        printf("\n");
        m.clear();
    }
    return 0;
}

