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
ll M=1000000007;
ll mod(ll x){
        return ((x%M + M)%M);
    }
ll add(ll a, ll b){
        return mod(mod(a)+mod(b));
    }
ll mul(ll a, ll b){
        return mod(mod(a)*mod(b));
    }
ll powr(ll a,ll b){
   if(b==0)
      return 1;
   if(b==1)
      return a;
   ll res=1;
   while(b>0){
    if(b&1){
        res=mul(res,a);
    }
    b/=2;
    a=mul(a,a);
  }
  return res;
}
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
   return a.second<b.second;
}
ll is[1000000];
vector <ll> primes;
void primegen(){
    ll n,i,j,k,x,mx=1000000;
    primes.push_back(2);
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0){
         for(ll j=i*i;j<=mx;j+=2*i){
          is[j]=1;
         }
       }
    }
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0)
            primes.push_back(i);
    }
}
ll ncr(ll x,ll y){
   ll ans=1,s=1;
    while(s<=y){
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
void solve()
{
  ll a,b;
   cin>>a>>b;
   //ll x=a,y=b;
   if(a==b){
    cout<<"0"<<endl;
    return;
   }
   vector<ll> v1,v2;
    ll ans=Max;
    for(ll i=1;i*i<=a;i++){
        if(a%i==0){
            v1.pb(i);
        if(i!=(a/i))
            v1.pb(a/i);
        }
    }
    for(ll i=1;i*i<=b;i++){
        if(b%i==0){
            v2.pb(i);
        if(i!=(b/i))
            v2.pb(b/i);
        }
    }
    for(ll i=0;i<v1.size();i++){
        for(ll j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                ll x=a/v1[i];
                ll y=b/v2[j];
                ll c1=0,c2=0;
                while(x%2==0){
                    c1++;
                    x/=2;

                }
                while(x%3==0){
                    c1++;
                    x/=3;

                }
                while(x%5==0){
                    c1++;
                    x/=5;

                }
                while(y%2==0){
                    c2++;
                    y/=2;

                }
                while(y%3==0){
                    c2++;
                    y/=3;

                }
                while(y%5==0){
                    c2++;
                    y/=5;

                }
           if(x==1&&y==1)
                ans=min(ans,c1+c2);
            }
        }
    }
    if(ans==Max)
        cout<<"-1"<<endl;
    else cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

