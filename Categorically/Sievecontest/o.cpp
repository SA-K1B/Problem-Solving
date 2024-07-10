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
   // freopen("i.txt","r",stdin);
  // freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    ll n,cnt=1;
    while(cin>>n){
        //printf("Case %lld: ",cnt++);
        if(n==0)
            return 0;
        fact(n);
        printf("%3d! =",n);
        for(ll k=0;k<primes.size()&&primes[k]<=n;k++){
            if(k==15)
                printf("\n%9d",m[primes[k]]);
            else printf("%3d",m[primes[k]]);
        }
        printf("\n");
        m.clear();
    }
    return 0;
}


